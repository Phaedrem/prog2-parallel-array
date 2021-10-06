/*********************
Name: Darren Bowers
Coding 04
Purpose: Program to dynamically create two parallel integer arrays and perform operations on them.
**********************/

#include "functions.h"

int sum_array(int *arr, const int arraySize){
    int sum = 0;
    for(int i=0; i< arraySize; i++){
        sum += arr[i];
    }
    return sum;
}

float avg_array(int*, const int){
    return 0;
}

void add_arrays(int *arr1, int *arr2, int *arr3, const int arraySize){
    for(int i=0; i< arraySize; i++){
        arr1[i] = (arr2[i] + arr3[i]);
    }
}

void display_array(int *arr, const int arraySize){
    cout << "[";
    for(int i=0; i< arraySize; i++){
        cout << arr[i];
        if(i<arraySize-1){
            cout << " ";
        } else{
            cout << "]" << endl;
        }
    }
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

