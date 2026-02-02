#ifndef PLANT_H
#define PLANT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>
#include <time.h>
#include "./display.h"

// Plant Structure
typedef struct plant
{
    char type;
    float age;
    int growth_stage; // int from 0-4
    int water_level; // int from 0-60
    bool alive;
} plant;

// Function Declarations //

// Plant a new plant
void new_plant(plant *p,char type);
// Print the outline of a Pot
void print_pot(int stage);
    // Pot Stages
    void pot_zero();
    void pot_one();
    void pot_two();
    void pot_three();
    void pot_four();

#endif // PLANT_H