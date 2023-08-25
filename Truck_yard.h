#ifndef TRUCK_YARD_H
#define truck_yard_h

#include <iostream> 
#include "truck.h"

class Truck_yard {

    private: 
    int capacity; 
    int total_stock_count; 
    int current_stock_list;
    Truck *get_current_stock_list;

    public: 
    Truck_yard(); //default constructor for yard with zero capacity
    Truck_yard(int capacity); //constructor for yard that can hold "capacity" trucks

    int get_total_stock_count(); //returns count of the current number of trucks in yard
    int get_stock_count(int code); //returns count of the number of trucks with brand code equal to "code"
    Truck* get_current_stock_list(); //returns an array containing all the trucks in the yard

    bool addStock(Truck c); //tries to add a truck to yard. if there is enough space, return true. and add trucks to the yard. otherwise, do not save truck, and return false. 

    ~Truck_yard(); // destructor. 
};

#endif