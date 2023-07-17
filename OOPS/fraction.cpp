#include<iostream>
using namespace std;

class Fraction{
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int numerator, int denominator){
            this -> numerator = numerator; // use of this is optional here
            this -> denominator = denominator;
        }
        void Print(){
            cout << numerator << "/" << denominator << endl;
        }
        void Add(Fraction const &f2) { // const & were added to avoid calling of copy constructor and make a copy of fraction f2 and const was called because we want that no body is able to write chnages into f2 but can only read them. 
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;
            int num = (numerator * x) + (f2.numerator * y);
            denominator = lcm;
            numerator = num;
            simplify();
        }

        void multiply(Fraction const &f2){
            numerator = (numerator * f2.numerator );
            denominator = (denominator * f2.denominator);
            simplify();
        }
        void simplify(){
            // int gcd = __gcd(numerator, denominator);
            int gcd = 1;
            int j = min(numerator,denominator);
            for (int i=1; i<=j; i++){
                if (numerator%i == 0 && denominator%i ==0){
                    gcd = i;
                }
            }
            numerator = numerator / gcd;
            denominator = denominator / gcd;   
        }
};

int main () {
    Fraction f1(10, 2);
    Fraction f2(14,4);

    // f1.Add(f2);
    f1.multiply(f2);
    f1.Print();
    // f2.Print();

    return 0;
}