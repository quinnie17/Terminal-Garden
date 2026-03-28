#ifndef DISPLAY_H
#define DISPLAY_H

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

// Define version number
#define VERSION "1.0"

#define clrscr() printf("\e[1;1H\e[2J")

// Set terminal state
void setup_terminal();
// Print Menu
void print_menu();
// Print whitespace
void print_ws();
// Print Status Bar
void print_status(plant *p);
// Cleanup Terminal
void restore_terminal();
#endif // DISPLAY_H