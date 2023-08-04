#include <iostream> 
using namespace std;

//given a matrix, print out the scaled version of the matrix, where you multiply every element in the matrix by the same numeric value. 
// elements should be printed by row, with a space separating elements on a raow, and a newline character separating rows. 

void print_scaled(int array[3][3], int scale){


    int array2[3][3] = {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            array2[i][j] = array[i][j] * scale;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << array2[i][j] << " ";
        }
        cout << endl;   
    }
}