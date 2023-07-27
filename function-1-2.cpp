#include <iostream>

double array_mean(int array[], int n){
    if (n<1){
        std::cout << "0.0" << std:: endl;
        return 0;
    }

    double sum = 0.0;
    for (int i=0; i<n; i++){
        sum+=array[i];
    }
    double average = 0;
    average = sum/n;

    return average; 
}