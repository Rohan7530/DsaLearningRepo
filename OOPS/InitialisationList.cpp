#include <iostream>
using namespace std;

class Student{
    public:
    int age;
    int const rollnumber;
    int &x ;//age reference variable

    Student (int r , int age) : rollnumber(r), age(age), x(this -> age){
        //this is called initialisation list, here the constant prop and the reference prop get their values at the time of initialisation i.e their memory gets allocated during the time of initialisation
    }
    void print(){
        cout << rollnumber << age << endl;
    }
};

int main (){
    Student s1(29,14);
    s1.print();
    return 0;
}