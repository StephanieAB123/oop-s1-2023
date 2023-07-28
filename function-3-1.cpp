#include <iostream> 

// write a function that given an array of integers, and its length, determine if the array is a 'fan' array, i.e. the entire array is a palindrome with the numbers
// in ascending order from the start to the middle element. 


bool is_fanarray(int array[], int n){

    bool x;

    if(n<1){
        return 0;
    }

    int half = n/2;

    for (int i = 0; i <= half; i++){

        if(array[i] != array[n-i-1]){
            x = 0;
            break;
        }else{
            x = 1;
        }
    }

    return x; 
}