/* Includes */
#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "art.h"

/* Definitions/Marcos */
#define MIN_COLS 100
#define MIN_ROWS 30


#define PCT_ROW(p) (LINES * (p) / 100)
#define PCT_COL(p) (COLS  * (p) / 100)

/* Data Structures */


/* Utility Functions */
void die(const char *msg) {
    endwin(); // restore terminal before exiting
    printf("%s", msg); // prints msg + the system error string
    exit(EXIT_FAILURE);
}

/* Term Setup */
int chkTerm() {
    if (COLS >= MIN_COLS && LINES >= MIN_ROWS) {
        return 1;
    }
    return 0;
}

void initTerm() {
    // Check terminal size
    if (chkTerm() != 1) {
        char termsize[64];
        snprintf(termsize, sizeof(termsize), "Terminal too small, min size is %d cols x %d rows\n", MIN_COLS, MIN_ROWS);
        die(termsize); 
    }
    cbreak();
}

/* Window Setup */
WINDOW *createWin(int height, int width, int startY, int startX) {
    int h = PCT_ROW(height);
    int w = PCT_COL(width);
    int y = PCT_ROW(startY);
    int x = PCT_COL(startX);

    WINDOW *win = newwin(h, w, y, x);
    box(win, 0, 0);
    wrefresh(win);
    return(win);
}

void draw_art_centered(WINDOW *win, const char *art[], int starty) {
    int win_width = getmaxx(win) - 2;

    /* find the widest line */
    int max_width = 0;
    for (int i = 0; art[i] != NULL; i++) {
        int len = (int)strlen(art[i]);
        if (len > max_width) max_width = len;
    }

    /* all lines start at the same x */
    int x = (win_width - max_width) / 2 + 1;
    if (x < 1) x = 1;

    for (int i = 0; art[i] != NULL; i++) {
        mvwprintw(win, starty + i, x, "%s", art[i]);
    }
    wrefresh(win);
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
    // Create Windows
    WINDOW *menu = createWin(10, 100, 0, 0);
    WINDOW *plant = createWin(50, 50, 11, 0);
    // Refresh Everything
    wrefresh(menu);
    wrefresh(plant);

    draw_art_centered(plant, pot8, 3);

    getch();
    delwin(menu);
    delwin(plant);
    endwin();
}