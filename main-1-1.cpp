#include <iostream> 
using namespace std;

extern int sum_diagonal(int array [4][4]);

int main(){
    int array[4][4] = {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };

    // for(int i=0;i<4;i++){
    //    for(int j=0;j<4;j++){
    //        cout << "\t" << array[i][j];
    //    }
    //    cout << endl;
    //}


    cout << sum_diagonal(array) << endl;


}
