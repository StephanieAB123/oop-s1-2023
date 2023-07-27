#include <iostream> 

int min_element(int array[], int n){

    if(n<1){
        return 0;
    }

    int smallest = array[1]; 
    for(int i=1; i<n; i++){
        if(smallest > array[i]){
            smallest = array[i];
        }
    }

    return smallest;
}