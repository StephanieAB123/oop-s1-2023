#include <iostream> 

//write a function that returns the sum of the elements in the even positions in an
//array. the function must return 0 if the size parameter n is less than 1, note, 0
// is considered an even position

double sum_even(double array[], int n){

    double sum = 0;

    if(n<1){
        return 0;
    }

    for(int i=0; i<n; i++){
        if(i%2 == 0){
            sum += array[i];
        }
    }

    return sum;
}