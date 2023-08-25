#ifndef Truck_h
#define Truck_h

#include <iostream>
using namespace std; 

class Truck {

    private: 
    string b_name; 
    int b_code;

    public:

    Truck(); //default constructor 
    Truck(int b_code, string b_name); 

    string get_brand_name(); //returns the brand name of the truck 
    int get_brand_code(); //returns the brand code number of truck.

    ~Truck(); //destructor   

};

#endif