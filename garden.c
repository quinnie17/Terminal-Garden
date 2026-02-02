#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>
#include <time.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include "plant.h"
#include "display.h"

/*
*  Assisted with development by Claude Sonnet 4.5
*  All code was written by human hands, with references provide by
*  AI was used to define and help select different functions to assist in the portability of the code.
*/

int main(int agrc, char **argv)
{
    // Create selection var for user input
    char selection = '_';
    // Get program start time
    time_t startup_time = time(NULL);
    // Get update cycle time
    time_t update_time = time(NULL);
    // Build default plant struct
    plant current = {'f', 0.0, 0, 0, false};
    // Open Menu
    print_menu();
    // Print Pot Zero
    print_pot(0);
    // Allow user to select UI option
    while (1 > 0)
    {
        time_t now = time(NULL);
        if (current.water_level > 0 && difftime(now, update_time) >= 60) // 60 Seconds
        {
            current.water_level--; // 
            update_status_display(); // Redraw status bar
        }
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
                clrscr();
                exit(0);
                break;
            // P to plant a new plant
            case 'p':
                printf("Flower or Tree? ");
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



void print_status(plant *p)
{
    // First line is Plant Type, Is Mature, Age in minutes

    // Second Line is a water_level status bar that decrements by one every 60 seconds

}