#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>
#include <time.h>
#include "./plant.h"
#include "./display.h"

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

void print_ws()
{
    for (int i = 12; i > 0; i--)
    {
    printf("\x1b[K\x1b[A");
    }
}
// Print Plant Status Menu
//void print_status(plant *p)