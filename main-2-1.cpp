#include <iostream> 
#include <string> 

using namespace std; 

extern void print_binary_str(std::string decimal_number);

int main(){

    char decimal[9];

    cout << "Enter a decimal number: "; 
    cin.getline(decimal, 9);

    string decimal_number(decimal);

    print_binary_str(decimal_number);


}