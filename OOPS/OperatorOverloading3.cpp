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
        Fraction Add(Fraction const &f2) const { // const & were added to avoid calling of copy constructor and make a copy of fraction f2 and const was called because we want that no body is able to write chnages into f2 but can only read them. 
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;
            int num = (numerator * x) + (f2.numerator * y);
            // denominator = lcm;
            // numerator = num;
            Fraction fnew(num,lcm);
            fnew.simplify();
            return fnew;
        }
        Fraction operator+(Fraction const &f2) const { // const & were added to avoid calling of copy constructor and make a copy of fraction f2 and const was called because we want that no body is able to write chnages into f2 but can only read them. 
        //This is a const function because the vale of this numerator and denominator are not changing 
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;
            int num = (numerator * x) + (f2.numerator * y);
            // denominator = lcm;
            // numerator = num;
            Fraction fnew(num,lcm);
            fnew.simplify();
            return fnew;
        }
        //basically operator overloading means extending the functionality of the operator from operation between integers and char and extend its operation to operate between two class objects
        //Operator over loading of the + operator that means F3 =F1 + F2
        void multiply(Fraction const &f2){
            numerator = (numerator * f2.numerator );
            denominator = (denominator * f2.denominator);
            simplify();
        }
        //Operator overloading of the * operator that means F3 = F1 * F2
        Fraction operator*(Fraction const &f2){
            int n = (numerator * f2.numerator );
            int d = (denominator * f2.denominator);
            Fraction fnew(n,d);
            fnew.simplify();
            return fnew;
        }
        //Operator overloading of the == operator that is to check if F1 == F2 or not
        bool operator==(Fraction const &f2) const {
            return(numerator == f2.numerator && denominator== f2.denominator);
        }

        Fraction & operator++(){
            numerator = numerator + denominator;
            simplify();
            return *this;
        }
        // here first of all "&" is used bcause we dont want to create a copy of f1 wgile the value is beinf incemented, we just want to return by reference that is we are referencing the same address to the temporary memory block that is created with incremented values, now "*this" is used because we only want to return the pointer or the address of this fraction, where we can automatically achieve the value, this is useful where Fration F3 = ++(++f1 is there)

        //PostIncrement operator, this operator does not have a nested operator characterictics
        Fraction & operator++(int){
            Fraction fnew(numerator,denominator);
            numerator = numerator + denominator;
            simplify();
            fnew.simplify();
            return *this;
        }

        // overloading += operator
        Fraction operator+= (Fraction const &f2){
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;
            int num = (numerator * x) + (f2.numerator * y);
            denominator = lcm;
            numerator = num;
            simplify();
            return *this;

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

int main(){
    Fraction f1(10,4);
    Fraction f2(15,8);

    Fraction f3 = f1++ ;
    f1 += f2;
    f3.Print();
    f1.Print();

    return 0;
}