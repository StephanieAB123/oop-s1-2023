#include <iostream> 

int max_element(int array[], int n){
    if(n<1){
        return 0;
    }

    int biggest = array[1];
    for(int i=1; i<n; i++){
        if(biggest < array[i]){
            biggest = array[i];
        }
    }
    return biggest;
}