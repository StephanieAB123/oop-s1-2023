#include <iostream> 

extern bool is_ascending(int array[], int n);

int main(){
    int array[5] = {1,6,3,4,5};

    std::cout << is_ascending(array, 5) << std:: endl;

    return 0;
}
