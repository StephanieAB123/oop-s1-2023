#include <iostream> 

bool is_descending(int array[], int n){

    bool x;

    for(int i=0; i<n; i++){
        if(array[i] >= array[i+1]){
            x = true;
            break;
        }else{
            x = false;
        }
    }
    return x;
}
