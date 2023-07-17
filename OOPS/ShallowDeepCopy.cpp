#include<iostream>
#include<cstring>

using namespace std;

class student{
    private:
    int age;
    char *name;

    public:
    student ( int age, char *name){
        this -> age = age;
        this -> name = new char (strlen(name) +1); // +1 because to include the /0 character, this line creates a new array for name
        strcpy(this -> name , name); //the name array gets copied into the new array this is called DEEP COPYING where the new name array is formed and contents of origional array gets copied into a new array while shallow copy is just copy of the address.
    }
    void display(){
        cout << name <<" " << age <<endl;
    }
};

int main(){
    char name[] = "abcd";
    student s1(20, name);
    s1.display();

    name[3] = 'e';

    student s2 (30, name);
    s2.display();
    s1.display();



    return 0;
}