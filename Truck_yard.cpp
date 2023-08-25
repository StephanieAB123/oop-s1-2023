#include "truck.h"
#include "Truck_yard.h"
using namespace std;


Truck_yard::Truck_yard(){
    capacity = 0;
    total_stock_count = 0;
}

Truck_yard::Truck_yard(int capacity){
    this -> capacity = capacity;
}

int Truck_yard::get_total_stock_count(){
    return total_stock_count;
}

int Truck_yard::get_stock_count(int code){
    int x = 0; 
    for (int i=0; i<total_stock_count; i++){
        if()
    }
    return x; 
}


Truck *Truck_yard::get_current_stock_list(){
    return current_stock_list;
}

bool Truck_yard::addStock(Truck c){

    if(total_stock_count >= capacity){
        return false;
    }

    current_stock_list[total_stock_count] = c;
    total_stock_count++; 
    return true;
}

Truck_yard::~Truck_yard() {  }