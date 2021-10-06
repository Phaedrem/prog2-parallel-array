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

    if(argc == 2){
        arraySize = atoi(argv[1]);
        if(arraySize > 0){
            int *numbers1;
            int *numbers2;
            int *answers;
            numbers1 = new int[arraySize];
            numbers2 = new int[arraySize];
            answers = new int[arraySize];
            cout << "the two arrays created are:" << endl;
            fill_random(numbers1, arraySize);
            fill_random(numbers2, arraySize);
            display_array(numbers1, arraySize);
            display_array(numbers2, arraySize);
            cout << endl << "adding the arrays together:" << endl;
            add_arrays(answers,numbers1,numbers2,arraySize);
            display_array(answers, arraySize);
            cout << endl << "adding the arrays together:" << endl;
            cout << "array 1 sum: " << sum_array(numbers1, arraySize);

            

            delete[] numbers1;
            delete[] numbers2;
            delete[] answers;

        } else{
            cout << "usage: " << argv[0] << " n (where n is a number above 0)" << endl;
        }
    } else {
        cout << "usage: " << argv[0] << " n (where n is a number above 0)" << endl;
    }

     /* DELETE ALL THESE COMMENTS WHEN YOU ARE DONE.

    /* STEP 5: add the arrays together and store the answer in the 
     * answer array using your add_arrays() function
     */

    /* STEP 6: print out the answer array as shown in the examples using your
     * display_array() function
     */

    /* STEP 7: use your sum_array() and avg_array() functions to print out
     * the remaining items as shown in the examples.
     */

    /* STEP 8: delete all three arrays
     */

    return 0;
}

