#include "Structs.h"
#include "iostream" 

const int len = 6;

void Foo() {
    int data[len] = { 55,242,242,1 };

    for (int i = 0; i < len; i++) {


        std::cout << "\n Array:= " << data[i] << "\n";
    }

}