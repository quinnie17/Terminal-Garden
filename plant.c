#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>
#include <time.h>
#include "display.h"
#include "plant.h"


void new_plant(plant *p, char type)
{
    // This function takes in the type char to identify which plant the user wants to plant

    // This function will need to reach to the globally defined struct plant "current"

        // Modify each of the values to update them to a start value

            // Set type char

            // Start age counter

            // Set water_level status

            // Set Bool Alive to true
}

void print_pot(int stage)
{
    switch (stage)
    {
    case 1:
        print_ws();
        pot_one();
        break;
    case 2:
        print_ws();
        pot_two();
        break;
    case 3:
        print_ws();
        pot_three();
        break;
    case 4:
        print_ws();
        pot_four();
        break;
    default:
        pot_zero();
        break;
    }
}

void pot_zero()
{
    // White Space - 7
    for (int i = 7; i > 0; i--)
    {
        printf(".\n");
    }
    // Empty Pot
    printf("\t\t\t\t\t_______\n");
    printf("\t\t\t\t\t\\     /\n");
    printf("\t\t\t\t\t \\___/\n");
}

void pot_one()
{
    // White Space - 7
    for (int i = 7; i > 0; i--)
    {
        printf(".\n");
    }
    // Pot Planted
    printf("\t\t\t\t\t__(^)__\n");
    printf("\t\t\t\t\t\\     /\n");
    printf("\t\t\t\t\t \\___/\n");
}

void pot_two()
{
    // White Space
    for (int i = 4; i > 0; i--)
    {
        printf(".\n");
    }
    // Plant Two
    printf("\t\t\t\t\t   _\n");
    printf("\t\t\t\t\t  (_)\n");
    printf("\t\t\t\t\t   |\n");
    printf("\t\t\t\t\t___|___\n");
    printf("\t\t\t\t\t\\     /\n");
    printf("\t\t\t\t\t \\___/\n");
}

void pot_three()
{
    // White Space - 3
    for (int i = 3; i > 0; i--)
    {
        printf(".\n");
    }
    // Plant Two
    printf("\t\t\t\t\t   _\n");
    printf("\t\t\t\t\t  (*)\n");
    printf("\t\t\t\t\t   | __\n");
    printf("\t\t\t\t\t   |/_/\n");
    printf("\t\t\t\t\t___|___\n");
    printf("\t\t\t\t\t\\     /\n");
    printf("\t\t\t\t\t \\___/\n");
}

void pot_four()
{
    // White Space - 1
    printf(".\n");
    // Plant Two
    printf("\t\t\t\t\t   _\n");
    printf("\t\t\t\t\t _( )_\n");
    printf("\t\t\t\t\t(_(#)_)\n");
    printf("\t\t\t\t\t  (_)\n");
    printf("\t\t\t\t\t   | __\n");
    printf("\t\t\t\t\t   |/_/\n");
    printf("\t\t\t\t\t___|___\n");
    printf("\t\t\t\t\t\\     /\n");
    printf("\t\t\t\t\t \\___/\n");
}

