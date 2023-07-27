#include <iostream> 

// write a function that given an array of integers and its length, will determine if the elements are in ascending order or not, that is,
// each element is greater than or equal to the previous element. the function must return true if in the size parameter is greater than 0 and the elements
//are in ascending order, otherwise it must return false. 

bool is_ascending(int array[], int n){

    bool x;

    for(int i=0; i<n; i++){
        if(array[i]<=array[i+1]){
            x = true; // 1
        }
        else{
            x = false; // 1
            break;
        }
    }

    return x;
}