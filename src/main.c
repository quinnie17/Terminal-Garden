/* Includes */
#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/* Definitions/Marcos */

/* Data Structures */
#define MIN_COLS 100
#define MIN_ROWS 30
/* Functions */
void die(const char *msg) {
    endwin(); // restore terminal before exiting
    printf("%s", msg); // prints msg + the system error string
    exit(EXIT_FAILURE);
}

void initTerm() {
    // Check terminal size
    if (chkTerm() != 1) {
        char termsize[64];
        snprintf(termsize, sizeof(termsize), "Terminal too small, min size is %d cols x %d rows\n", MIN_COLS, MIN_ROWS);
        die(termsize); 
    }
}

int chkTerm() {
    if (COLS >= MIN_COLS && LINES >= MIN_ROWS) {
        return 1;
    }
    return 0;
}

/* Main */
int main(void) {
    // Set Locale for Ncurses Lib
    setlocale(LC_ALL, "");
    
    // Initialize the Screen
    initscr();

    // Initialize various term specs
    initTerm();
    
    refresh();
    getch();
    endwin();
}