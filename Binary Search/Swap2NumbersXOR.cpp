#include <iostream>
using namespace std;

int main() {
    cout << "Enter two numbers"<< endl;
    int a, b;
    cin >> a;
    cin >> b;

    cout << "Before swapping" << endl ;
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping" << endl ;
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl;


    return 0;
}