#include <iostream> 

extern void two_five_nine(int array[], int n);

int main(){

    int array[10] = {2,3,2,5,4,5,9,8,9,9};

    two_five_nine(array, 10);

}