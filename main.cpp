/*********************
Name: Darren Bowers
Coding 04
Purpose: Program to dynamically create two parallel integer arrays and perform operations on them.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    srand(time(NULL));  // do this only once per application
    fstream myfile;

    if(argc == 2){
    } else {
        cout << "usage: " << argv[0] << " n (where n is a number above 0)" << endl;
    }
    /* write your code below to create the program as
     * specified in the assignment and as shown in the examples.
     * follow the instructions given here and in the assignment.
     * DELETE ALL THESE COMMENTS WHEN YOU ARE DONE.
     */

    /* STEP 1: check your arguments, make sure you have exactly 2 using
     * argc, and make sure the second argument is a string with only
     * digit characters that represents a positive (above 0) number.
     * use your function is_positive_integer() to do this. display
     * an error message as shown in the examples if the parameters
     * are not correct.
     */

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

