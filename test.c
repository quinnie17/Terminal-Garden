#include <stdio.h>

#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_RESET    "\x1b[0m"

int main(void) 
{
    char cursor = '_';
    while (cursor != 'q')
    {
    cursor = getchar();
    // Print text in yellow
    printf("%sHello, World! This text is yellow.%s\n", ANSI_COLOR_YELLOW, ANSI_COLOR_RESET);

    // You can also use the codes directly in the string literal
    printf("\x1b[31mThis text is red.\x1b[0m\n");

    printf("\x1b[31m\u2588 \u2593 \u2592 \u2591\n");

    int a = 100, b = 10000, c = 1000000;
    printf( "%12d %12d %12d\n", a, b, c);
    printf( "%-12d %-12d %-12d\n", a, b, c);
    printf("\x1b[2K\x1b[1A");
    //printf("\e[1;1H\e[2J");
    }
    return 0;

}
