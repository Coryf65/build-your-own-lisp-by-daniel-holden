#include <stdio.h>
#include <stdlib.h>

/* If we are compiling on Windows compile these functions */
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

/* Fake readline function */
char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer)+1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy)-1] = '\0';
    return cpy;
  }
  
/* Fake add_history function */
void add_history(char* unused) {}

/* Otherwise include the editline headers */
#else
#include <editline/readline.h>
#include <editline/history.h>
#endif

int main(int argc, char** argv) {
    
    /* print the version and exit information */
    puts("Lispy Version 0.0.1");
    puts("Press Ctrl+c to Exit\n");

    /* In a forever loop */
    while(1) {

        /* Output to the prompt and get input */
        char* input = readline("lispy> ");

        /* add input to the history */
        add_history(input);

        /* Echo input back to the user */
        printf("No you're a %s\n", input);

        /* free retrieved input */
        free(input);
    }

    return 0;
}