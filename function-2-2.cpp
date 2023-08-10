#include <iostream> 
#include <math.h>
using namespace std;

//given a binary number represented as an array, write a function that takes the array and its size as a parameter and returns the integer value 
// at least 1 and no more than 30 numbers in the array and that all the values are either 0 r 1. 
// the array is ordered with most significant binary digit at the start (index 0)
// and the least significant digit at the end. 

int bin_to_int(int binary_digits[30], int number_of_digits){

    int decimal = binary_digits[30];
    int remainder; 

    while(decimal != 0){
        decimal % 10 = remainder; // gives the remainder
        decimal /= 10;




    }




}