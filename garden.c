#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>
#include <time.h>

// Define version number
#define VERSION "1.0"
// Creates plant struct
struct Plant
{
    char *type;
    float age;
    int growth_stage;
    bool watered;
    bool mature;
};

// #Functions#

// Print Menu
void print_menu();
// Print the outline of a Pot
 //void print_pot();
    // Pot Stages
    void pot_zero();
    /*void pot_one();
    void pot_two();
    void pot_three();
    void pot_four();
    */
// Plant a new plant

// Water Plant

// Get age of plant

// Export plant vars to .txt file

// Load plant vars from .txt file

// #Global Variables#

// Program Start Time

int main(int agrc, char *argv)
{
    // Create selection var for user input
    char selection = '_';
    // Open Menu
    print_menu();
    // Print Pot Zero
    pot_zero();
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
                printf("Quitting Program\n");
                break;
            // P to plant a new plant
            case 'p':
                printf("Placeholder text for planting\n");
                continue;
            // D to dig up dead plant
            case 'd':
                printf("Placeholder text for digging\n");
                break;
            // A to get current plants age, commented out for the time being until final decision about UI
            /*case 'a':
                printf("Placeholder text for age\n");
                break; */
            // W to water plant
            case 'w':
                printf("Placeholder text for watering\n");
                break;
            // S to save plant
            case 's':
                printf("Placeholder text for saving\n");
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
    // Title
    printf("\t\t\t\tTerminal Garden %s\n", VERSION);
    // Title Bar
    int title_bar = 71;
    char title_bar_char = '-';
    printf("\t");
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
}
/*
void print_pot(int stage)
{
    switch (stage)
    {
    case 1:
        pot_one();
        break;
    case 2:
        pot_two();
        break;
    case 3:
        pot_three();
        break;
    case 4:
        pot_four();
        break;
    default:
        pot_zero();
        break;
    }
}
*/
void pot_zero()
{
    // White Space
    printf("\n\n\n\n\n");
    // Empty Pot
    printf("\t\t\t\t\t_____\n");
    printf("\t\t\t\t\t\\   /\n");
    printf("\t\t\t\t\t \\_/\n");
}

void pot_one()
{

}

void pot_two()
{
    
}

void pot_three()
{
    
}

void pot_four()
{
    
}