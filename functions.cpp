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

float avg_array(int *arr, const int arraySize){
    float average = float(sum_array(arr, arraySize)) / float(arraySize);
    return average;
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

bool is_positive_integer(char *argv){
    bool success = true;
    int length = strlen(argv);
    for(int i=0; i<length; i++){
        if(argv[i] < '0' || argv[i] > '9'){
            success = false;
        } else if(int test = atoi(argv) == 0){
                success = false;
        }
    }
    return success; 
}