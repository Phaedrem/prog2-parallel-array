/*********************
Name: Darren Bowers
Coding 04
Purpose: Program to dynamically create two parallel integer arrays and perform operations on them.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    srand(time(NULL));  // do this only once per application
    fstream myfile;
    int arraySize;

    if(argc == 2 && (is_positive_integer(argv[1]))){
        arraySize = atoi(argv[1]);
        int *numbers1 = new int[arraySize];
        int *numbers2 = new int[arraySize];
        int *answers= new int[arraySize];
        cout << "the two arrays created are:" << endl;
        fill_random(numbers1, arraySize);
        fill_random(numbers2, arraySize);
        display_array(numbers1, arraySize);
        display_array(numbers2, arraySize);
        cout << endl << "adding the arrays together:" << endl;
        add_arrays(answers,numbers1,numbers2,arraySize);
        display_array(answers, arraySize);
        cout << endl << "adding the arrays together:" << endl;
        cout << "array 1 sum: " << sum_array(numbers1, arraySize) << endl;
        cout << "array 1 average: " << avg_array(numbers1, arraySize) << endl;
        cout << endl <<"array 2 sum: " << sum_array(numbers2, arraySize) << endl;
        cout << "array 2 average: " << avg_array(numbers2, arraySize) << endl;

            delete[] numbers1;
            delete[] numbers2;
            delete[] answers;

        } else{
            cout << "usage: " << argv[0] << " n (where n is a number above 0)" << endl;
        }
    return 0;
}

