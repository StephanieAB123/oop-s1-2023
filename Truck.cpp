#include "Truck.h"
using namespace std;

Truck::Truck(){
    b_code = 0; 
    b_name = "";
}


Truck::Truck(int b_code, string b_name){
    this-> b_code = b_code; 
    this-> b_name = b_name;
}

string Truck::get_brand_name(){
    return b_name;
}

int Truck::get_brand_code(){
    return b_code;
}

Truck::~Truck() {   }