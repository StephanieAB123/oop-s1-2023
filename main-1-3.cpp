#include <iostream> 

extern int num_count(int array[], int n, int number);

int main(){
    int array[5] = {1, 2, 1, 4, 1};
    std::cout << "There are " << num_count(array, 5, 1) << " ones.";

    std::cout << "" << std:: endl;

    return 0;
}