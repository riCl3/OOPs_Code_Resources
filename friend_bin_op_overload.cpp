#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    /*
    Complex operator+(Complex c){   <- Operator overloading as a member function
        Complex temp(0, 0);            here one parameter is the caller object itself
        temp.a = a + c.a;              another parameter is passed as an argument.
        temp.b = b + c.b;              Eg: a+b = "a object calls + operator passing b as an argument"

        return temp;
    }
    */

    void getVal()
    {
        cout << a << " " << b;
    }

    friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex c1, Complex c2){   // <- Operator Overloading from Friend Function
    Complex temp(0, 0);                      //    Here both the parameters are passed as arguments.
    temp.a = c1.a + c2.a;                    //    Eg: a+b = "+ operator is called passing a and b as arguments"
    temp.b = c1.b + c2.b;

    return temp;
}

int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;

    c3.getVal();
    return 0;
}