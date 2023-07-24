#include <iostream>
using namespace std;

class DynamicArray{
    private:
        int *data;
        int nextIndex;
        int capacity;
    public:
    //Constructor
    DynamicArray(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    //In this function first it is checked that the nextIndex is equal to the capacity or not, if the capacity is full a new array is made, capacity is doubled, old array isdeleted and old array id assigned the new array values. this is the basic add element feature of the dynamic array
    void add(int element){
        if(nextIndex == capacity){
            int *newData = new int[capacity * 2];
            for (int i = 0; i < capacity ; i++){
                newData[i] = data[i];
                nextIndex ++;
            }
            delete [] data;
            data = newData;
            capacity = capacity * 2;
        } else{
            data[nextIndex] = element;
            nextIndex++ ;
        }
    }
    // this function basically adds the element in the given index, for that it checks if the given index is less than nextIndex then it assigns the valu of element to that position, if the given index is equal to the nextIndex then it it calls out functional add element function, if the given index is greater than the next Index then it is a invalid insertion and return nothing
    void add(int element, int i){
        if (i < nextIndex){
            data[i] = element;
        } if(i == nextIndex){
            add(element);
            nextIndex ++;
        }
        else{
            return;
        }
    }

    int get(int i){
        if(i >= 0 && i < nextIndex){
            return data[i];
        }
        return -1;
    }

    void getCapacity(){
        cout << capacity << endl;
    }
    //Copy Constructor
    DynamicArray(DynamicArray const &d){
        nextIndex = d.nextIndex;
        capacity = d.capacity;
        // this is shallow copy as it doesnt changes the pointer only creates a copy of the array, this will not allow us to make changes into the arrays seperately
        data = new int [d.capacity];
        for (int i; i < nextIndex; i++){
            data[i] = d.data[i];
        }
        // this is deep copy as the array first forms a new array then copies the value into the new array
    }

    //overloading the copy assignment operator ( = )
    void operator=(DynamicArray const &d) {
        nextIndex = d.nextIndex;
        capacity = d.capacity;
        // this is shallow copy as it doesnt changes the pointer only creates a copy of the array, this will not allow us to make changes into the arrays seperately
        data = new int [d.capacity];
        for (int i; i < nextIndex; i++){
            data[i] = d.data[i];
        }
        // this is deep copy as the array first forms a new array then copies the value into the new array
    }

    void print(){
        for (int i = 0; i < nextIndex - 1; i++){
            cout << data[i] << " ";
        }
    }

        
};