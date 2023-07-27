#include <iostream> 

extern int count_evens(int number);

int main(){

    std::cout << "The number of even numbers is: " << count_evens(5) << std:: endl; 

    return 0;
}