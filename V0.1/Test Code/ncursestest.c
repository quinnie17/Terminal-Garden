#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>
#include <locale.h>
#include <stdlib.h>

#define TCOLS 100
#define TROWS 50

void die(const char *msg) {
    endwin(); // restore terminal before exiting
    printf("%s", msg); // prints msg + the system error string
    exit(EXIT_FAILURE);
}


int init_term(int cols, int rows) {
    // prints escape codes to resize term emulator
    printf("\033[8;%d;%dt", rows, cols);
    fflush(stdout);
    
    // sleep to give emulator time to respond
    usleep(100000);

    // have ncurses recheck window
    endwin();
    refresh();

    // Check if terminal resized
    if (LINES == rows && COLS == cols) {
        return 1;
    }
    return 0;
}


int main(void) {
    // Set Locale for Ncurses Lib
    setlocale(LC_ALL, "");
    // Initialize the Screen
    initscr();
    
    if (init_term(TCOLS, TROWS) != 1)
    {
        die("Failed to resize terminal");
    } 
    printw("Cols %i, Rows %i", COLS, LINES);
    refresh();
    
    getchar();
    endwin();
    // Dellocates Mem and Ends Program
}