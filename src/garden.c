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
*  AI was used to define and help select different functions to assist in the portability of the code.
*/

int main(int agrc, char **argv)
{
    // Create selection var for user input
    char selection = '_';
    void setup_terminal();
    // Get program start time
    //time_t startup_time = time(NULL);
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
            //update_status_display(); // Redraw status bar
        }
        char input = getchar();
        if (input != EOF && input != '\n') 
        {
            selection = input;
        }
        usleep(100000);
        if (selection != '_')
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
                restore_terminal();  // Automatically called on exit
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