#include <iostream> 
using namespace std;

int a1, a2, remainder; 
int tab = 0; 
int maxtab = 0; 
int table[0]; 

int main(){
    cout << "Enter a decimal number: ";
    cin >> a1; 
    a2 = a1; 

    while (a1!=0){
        remainder = a1%2;
        a1 = a1/2;
        maxtab++;
    }

    maxtab--; 
    a1 = a2;
    table[0] = table[maxtab];

    while (a1!=0){
        remainder = a1%2;
        a1 = a1/2; 
        table[tab] = remainder; 
        tab++;
    }
    tab--; 
    cout << "Your binary number: ";

    
}