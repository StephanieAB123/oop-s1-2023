#include <iostream> 
using namespace std; 

//given TWO two-dimensional arrays, add them together and print the result as in 1-4 above. what relationship needs to be between the sizes of the two matrices? 

void print_summed(int array1[3][3],int array2[3][3]){

    int array3[3][3] = {
        {0,0,0},
        {0,0,0}, 
        {0,0,0}
    };

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << array3[i][j] << " "; 
        }
        cout << endl; 
    }
}