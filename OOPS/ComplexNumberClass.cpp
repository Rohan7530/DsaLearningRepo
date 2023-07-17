#include <iostream>
using namespace std;

class ComplexNumber{
    private:
    int real;
    int imaginary;

    public:
    ComplexNumber(int real, int imaginary){
        this -> real = real;
        this -> imaginary = imaginary;
    }
    void print(){
        cout << real << " + i" << imaginary;
    }
    void add ( ComplexNumber const &c2){
        real = real + c2.real;
        imaginary = imaginary + c2.imaginary;
    }
    void multiply(ComplexNumber const &c2){
        real = ((real * c2.real) - (imaginary * c2.imaginary));
        imaginary = ((real * c2.imaginary) + (imaginary * c2.imaginary));
    }
};

int main(){
    int real1, imaginary1 , real2, imaginary2;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumber c1 (real1, imaginary1); 
    ComplexNumber c2 (real2, imaginary2);

    int choice;
    cout << "please Enter the number of your choice" << endl;
    cout << "1. Add | 2. multiply" << endl;
    cin >> choice;

    if (choice == 1){
        c1.add(c2);
        c1.print();
    }
    else if (choice == 2){
        c1.multiply(c2);
        c1.print();
    } else{
        cout << "Please enter the correct choice" << endl;
    }


}