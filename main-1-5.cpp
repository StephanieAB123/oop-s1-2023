#include <iostream> 

extern void print_summed(int array1[3][3], int array2[3][3]);

int main(){
    int array1[3][3] = {
        {0,1,2},
        {3,4,5},
        {7,8,9}
    };

    int array2[3][3] = {
        {0,0,0},
        {2,2,2},
        {3,3,3}
    };

    print_summed(array1, array2);

}