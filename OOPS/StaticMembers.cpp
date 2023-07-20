#include<iostream>

using namespace std;



class Student{
    int static totalStudents;

    public:
    int age;
    int rollNumber;

    //The static property is a property which can not be memeber of a access specifier or constructor function rather it can be accessed by the whole class. The right way to call a static property is by the following syntax
    // student :: totalStudents

    Student(){
        totalStudents ++;
    }

    int static getTotalStudents(){
        return totalStudents;
    }
    //This is a static function and static function has 2 properties:
    // 1. They can only access static properties
    // 2. they dont use 'this' keyword because they access static memebers not object memebers like age and rollNumber
    //They are also accessed using the syntax Student::getTotalStudents()
     //Initialize static variable



};

int Student::totalStudents = 0;

int main (){

    Student s1, s2, s3, s4, s5;
    cout << Student :: getTotalStudents() << endl;
    return 0;
}