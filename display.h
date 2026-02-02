#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>
#include <time.h>
#include "./plant.h"

// Define version number
#define VERSION "1.0"

#define clrscr() printf("\e[1;1H\e[2J")

// Print Menu
void print_menu();
// Print whitespace
void print_ws();
// Print Status Bar
//void print_status(plant *p);

#endif // DISPLAY_H