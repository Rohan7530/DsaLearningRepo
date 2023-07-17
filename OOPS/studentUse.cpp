#include<iostream>
#include "student.cpp"
using namespace std;

int main (){
    //Creating objects statically
    Student s1;
    Student s2;

    //Creating objects dynamically
    Student *s3 = new Student;
    Student *s4 = new Student;

    //declaring and assigning values to properties(static)
    s1.age = 15;
    s1.rollNumber = 26;
    s1.display();

    //  cout << s1.age << endl;

    //declaring and assigning values to properties(dynamic)
    (*s3).age = 24;
    (*s3).rollNumber = 200;
    (*s3).display();

    s4 -> age = 23;
    s4 -> rollNumber = 345;
    s4 -> display();

    



    return 0;
}