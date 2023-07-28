#include <iostream> 
using namespace std;

//write a function that given a character 'a','b','c','d','e' representing a grade, uses a switch statement
// print out if this is a pass or fail. 
// print nothing if the character given is not a valid grade


void print_pass_fail(char grade){

    switch (grade){
        case 'A':
            cout<< "Pass" << endl;
            break;
        case 'B':
            cout<< "Pass" << endl;
            break;
        case 'C':
            cout<< "Pass" << endl;
            break;
        case 'D':
            cout<< "Pass" << endl;
            break;
        case 'E':
            cout<< "Fail" << endl;
            break;
        default:
            cout<< "It is not a valid grade." << endl;
            break;
        }

        return;
}
