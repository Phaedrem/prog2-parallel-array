/*********************
Name: Darren Bowers
Coding 04
Purpose: Program to dynamically create two parallel integer arrays and perform operations on them.
**********************/

#include "functions.h"

int sum_array(int*, const int){
    return 0;
}

float avg_array(int*, const int){
    return 0;
}

void add_arrays(int*, int*, int*, const int){
    
}

void display_array(int *arr, const int arraySize){
    for(int i=0; i< arraySize; i++)
        cout << arr[i] << " ";
}

void fill_random(int *arr, const int arraySize){
    for(int i=0; i<arraySize; i++){
        arr[i] = rand()%MAX+MIN;
    }
}

bool is_positive_integer(char*){
    return 0;
}

    /*
     * write your function definitions here to create the program as
     * specified in the assignment and shown in the examples
     */

