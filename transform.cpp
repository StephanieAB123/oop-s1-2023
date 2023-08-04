#include <iostream> 
using namespace std; 

int main(){
    int n; //user input
    int remainder; //stores remainder
    int binary = 0;
    int i = 1;

    cout << "Enter a number: ";
    cin >> n; 

    while(n != 0){

        remainder = n%2; 
        n = n/2; 
        binary = binary + remainder*i;
        i = i*10; 
    }

    cout << "Your binary code is: " << binary << endl; 

}


