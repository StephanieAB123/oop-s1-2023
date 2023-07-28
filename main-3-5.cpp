#include <iostream> 

extern double sum_even(double array[], int n);

int main(){

    double array[10] = {1,2,1,4,1,6,1,8,1,10};

    std::cout<< sum_even(array, 10) << std:: endl; 
}