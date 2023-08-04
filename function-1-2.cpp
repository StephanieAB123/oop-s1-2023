#include <iostream> 
using namespace std; 

// given a matrix of integers with 10 rows and 10 columns, write a function and program to determine if the the matrix is an identity matrix or not.
//return a 1 if it is an identity matrix and a 0 if not.
// Definition :: an identity matrix is one with 1's down the main diagonal and 0's elsewhere

int is_identity(int array[10][10]){

    int x;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){

            if((array[i][j] != 1) && (array[j][i]!=0)){
                x = 0;
            }
            
            if(i==j){
                if(array[i][j] != 1){
                    x = 0;
                }
            }else{
                x = 1;
            }
        }     
    }

    return x;
}
