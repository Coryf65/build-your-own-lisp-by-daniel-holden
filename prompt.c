#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

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