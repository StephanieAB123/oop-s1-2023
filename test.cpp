#include <iostream> 
using namespace std; 

int decimal_to_binary(int decimal){

    int x = decimal;
    int remainder;
    int i = 1; 

    while(decimal !=0){
        int x = decimal;
        x % 2 = remainder; 
        decimal /= 2;
        remainder *= i*10;
        i++;
    }

    return remainder; 

}