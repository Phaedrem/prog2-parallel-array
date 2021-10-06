/*********************
Name: Darren Bowers
Coding 04
Purpose: Program to dynamically create two parallel integer arrays and perform operations on them.
**********************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

using std::cout;
using std::endl;
using std::atoi;
using std::srand;
using std::rand;
using std::fstream;

// use these defines in your fill random function
#define MIN 1
#define MAX 100

// do not modify these prototypes, use them as is in your cpp
int sum_array(int*, const int);
float avg_array(int*, const int);
void add_arrays(int*, int*, int*, const int);
void display_array(int*, const int);
void fill_random(int*, const int);
bool is_positive_integer(char*);

#endif /* FUNCTIONS_H */
