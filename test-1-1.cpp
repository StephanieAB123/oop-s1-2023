#include <iostream> 
using namespace std; 

extern int binary_to_decimal(int decimal);

int main(){

    int decimal;
    cout << "Enter a decimal: ";
    cin >> decimal; 

    cout << binary_to_decimal(decimal) << endl;

    return 0; 
}