#include <iostream> 

//given an array of integres and its length, return the median of the array.
// the median of a list is the middle number of the sorted list. 
// e.g. the array {3,5,2,1,4} after sorting becomes {1,2,3,4,5} which has a median of 3.
// the function must return 0 if the size parameter n is even or if it is less than 1

int median_array(int array[], int n){

    if(n<1){
        return 0;
    }

    int placeholder;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(array[i]>array[j]){
                placeholder = array[i];
                array[i] = array[j];
                array[j] = placeholder;
            }
        }
    }

    int half = (n/2);
    int median; 

    median = array[half];

    return median;

}