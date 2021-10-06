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

    /* STEP 2: after you are sure you have a good string that represents a
     * positive int above 0, use it to dynamically create 3 int
     * arrays of that size. Call the arrays, 'numbers1', 'numbers2',
     * and 'answer'.
     */

    /* STEP 3: call your fill_random() function to fill the arrays with
     * random numbers 1 - 100
     */

    /* STEP 4: print out both arrays as shown in the examples using your
     * display_array() function
     */

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

