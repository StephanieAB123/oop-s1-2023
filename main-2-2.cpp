#include <iostream> 

extern int max_element(int array[], int n);

int main(){

    int array[5] = {1,3,4,12,6};

    std::cout << "The biggest number is: " << max_element(array, 5) << std:: endl;

    return 0;
}