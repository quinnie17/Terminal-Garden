#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>
#include <time.h>

/*
*  Assisted with development by Claude Sonnet 4.5
*  All code was written by human hands, with references provide by
*  AI was used to define and help select different functions to assist in the portability of the code.
*/
// Define version number
#define VERSION "1.0"
#define clrscr() printf("\e[1;1H\e[2J")
// Creates plant struct
typedef struct plant
{
    char type;
    float age;
    int growth_stage; // int from 0-4
    int water_level; // int from 0-60
    bool alive;
}plant ;

// #Functions#

// Print Menu
void print_menu();
// Print Plant Status Menu
void print_status(plant p);
// Print whitespace
void print_ws();
// Print the outline of a Pot
void print_pot();
    // Pot Stages
    void pot_zero();
    void pot_one();
    void pot_two();
    void pot_three();
    void pot_four();
// Plant a new plant
void new_plant(plant *p, char type);
// Water Plant

// Get age of plant

// Export plant vars to .txt file

// Load plant vars from .txt file

// #Global Variables#

// Program Start Time
// Main Plant 
struct plant current = {'_', 0.0, 0, 0, false };
int main(int agrc, char *argv)
{
    // Create selection var for user input
    char selection = '_';
    // Open Menu
    print_menu();
    // Print Pot Zero
    print_pot(0);
    // Allow user to select UI option
    while (selection != 'q')
    {
        selection = getchar();
        if (selection == '\n')
        {
            continue;
        }
        // Switch statement for each UI button
        switch (selection)
        {   
            // Q to quit program 
            case 'q':
                clrscr();
                printf("Quitting Program\n");
                break;
            // P to plant a new plant
            case 'p':
                printf("Flower or Tree? ");
                char answer = getchar();
                print_pot(1);
                break;
            // D to dig up dead plant
            case 'd':
                printf("Placeholder text for digging\n");
                print_pot(2);
                break;
            // W to water plant
            case 'w':
                printf("Placeholder text for watering\n");
                print_pot(3);
                break;
            // S to save plant
            case 's':
                printf("Placeholder text for saving\n");
                print_pot(4);
                break;
            // L to load plant
            case 'l':
                printf("Placeholder text for loading\n");
                break;
            case '\n':
                break;
            default:
                printf(":(\n");
                break;
        }
    }    
}

// #####

void print_menu()
{
    // Clear previous screen
    clrscr();
    // Title
    printf("\t\t\t\tTerminal Garden %s\n", VERSION);
    // Title Bar
    int title_bar = 75;
    char title_bar_char = '-';
    printf("      ");
    for (int i = 0; i < title_bar; i++)
    {
        printf("%c", title_bar_char);
    }
    printf("\n");
    // Quit
    printf("\tQ - Exit the program");
    // Plant
    printf("\tP - Start a new Plant");
    // Dig 
    printf("\tD - Dig up a dead plant\n");
    // Age
    // printf("\tA - Check a plant's age\n");
    // Water
    printf("\tW - Water a plant");
    // Save
    printf("\tS - Save a plant");
    // Load
    printf("\tL - Open previous save\n");
    // End Bar
    printf("      ");
    for (int i = 0; i < title_bar; i++)
    {
        printf("%c", title_bar_char);
    }
    printf("\n");
}

void print_status(plant p)
{
    // First line is Plant Type, Is Mature, Age in minutes

    // Second Line is a water_level status bar that decrements by one every 60 seconds

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

void print_ws()
{
    for (int i = 12; i > 0; i--)
    {
    printf("\x1b[K\x1b[A");
    }
}

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