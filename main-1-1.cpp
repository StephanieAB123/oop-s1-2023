#include <iostream>
#include "truck.h"
using namespace std; 

int main(){

    Truck truck1();
    Truck truck2(420, "Lavenders Blue Dilly");

    cout << truck2.get_brand_name() << " " << truck2.get_brand_code() << endl;

    return 0;
}