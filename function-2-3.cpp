#include <iostream> 

// Write a function that given an array of integers and the length of the array, will count the amount of times the numbers 2, 5, 9, 

void two_five_nine(int array[], int n){

    int twos = 0;
    int fives = 0; 
    int nines = 0; 

    int B[3] ={0, 0, 0}; 

    for(int i=0; i<n; i++){
        switch (array[i]){
            case '2':
                twos++;
                B[1] = twos;
                break; 
            case '5':
                fives++;
                B[2] = fives;
                break;
            case '9': 
                nines++;
                B[1] = nines;
                break;
            default: 
                break;
        }
    }

    std::cout << "2:" << B[1] << ";5:" << B[2] << ";9:" << B[3] << ";" << std:: endl; 
}