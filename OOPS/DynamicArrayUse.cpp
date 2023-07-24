#include <iostream>
#include "DynamicArray.cpp"
using namespace std;

int main(){
    DynamicArray d1; // calling default constructor
    d1.add(10,0); // calling add function
    d1.add(20,1);
    d1.add(30,2);
    d1.add(40,3);
    d1.add(50,4);
    d1.add(60,5);
    d1.add(70,6);

    d1.print();
    d1.getCapacity();

}