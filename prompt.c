#include <stdio.h>

/* declare a buffer for the user input siz of 2048 */
static char input[2048];

int main(int argc, char** argv) {
    /* print the version and exit information */
    puts("Lispy Version 0.0.1");
    puts("Press Ctrl+c to Exit\n");

    /* In a forever loop */
    while(1) {

        /* Output out prompt */
        fputs("lispy> ", stdout);

        /* Read a line of user input maximum size of 2048 */
        fgets(input, 2048, stdin);

        /* Echo input back */
        printf("No you're a %s", input);
    }

    return 0;

}