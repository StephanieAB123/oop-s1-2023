#include <iostream> 
using namespace std; 

//given a multi-dimensional array of integers, print all its elements. you may assume that the dimensions are 10x10, as in the signature.
// elements should be printed by row, with a space separating elements on a row, and a newline separating rows (use 'std::endl').


void print_matrix(int array[10][10]){

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout << array[i][j]; 
            cout << " "; 
    
        }
        cout << endl;
    }
}