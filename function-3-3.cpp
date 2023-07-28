#include <iostream> 
using namespace std;

// write a function that given an array and its length, returns the
//weighted average of the array, defined as sum of xi * wi/n
//where xi represents all the distinct elements in the array, wi represents 
// how many times the value of element xi appears in the array
// and n is the size of the array. e.g. if the array is {1,2,1,4,1,3} the weighted average is 

double weighted_average(int array[], int n){

    double sum = 0;
    double average = 0;

    int ones = 0; 
    int twos = 0; 
    int threes = 0; 
    int fours = 0; 
    int fives = 0; 
    int sixes = 0; 
    int sevens = 0; 
    int eights = 0; 
    int nines = 0;

    if(n<1){
        return 0;
    }

    for(int i=0; i<n; i++){
        switch(array[i]){
            case 1:
                ones++;
                break; 
            case 2: 
                twos++; 
                break;
            case 3: 
                threes++; 
                break;
            case 4: 
                fours++;
                break;
            case 5: 
                fives++;
                break;
            case 6: 
                sixes++; 
                break;
            case 7: 
                sevens++;
                break;
            case 8: 
                eights++; 
                break;
            case 9: 
                nines++;
                break;
            default:
                break;
        }
    }

    sum = (1*ones)+(2*twos)+(3*threes)+(4*fours)+(5*fives)+(6*sixes)+(7*sevens)+(8*eights)+(9*nines);
    average = sum/n;

    return average;
}
