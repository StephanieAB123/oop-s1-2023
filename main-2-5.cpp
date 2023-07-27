#include <iostream> 

extern bool is_descending(int array[], int n);

int main(){
    int array[5] = {5,3,2,1,1};

    std::cout << is_descending(array, 5) << std:: endl;

    return 0;
}