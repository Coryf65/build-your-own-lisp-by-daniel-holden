#include <stdio.h>

int main(int argc, char** argv)
{
    int i = 5;
    puts("starting app");

    while (i > 0)
    {
      puts("Hello, World");
      i = i - 1;
    }
    
    puts("end");    
    return 0;
}