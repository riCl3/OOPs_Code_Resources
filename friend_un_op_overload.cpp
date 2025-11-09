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
    Complex operator-(){            <- Unary Operator overloading as a member function
        Complex temp(0, 0);            here the parameter is the caller object itself
        temp.a = -a;                   Eg: -a = "a object calls - operator without an argument"
        temp.b = -b;

        return temp;
    }
    */

    void getVal()
    {
        cout << a << " " << b;
    }

    friend Complex operator-(Complex);
};

Complex operator-(Complex c){          // <- Operator Overloading from Friend Function
    Complex temp(0, 0);                //    Here the parameter itself is passed as argument.
    temp.a = -c.a;                     //    Eg: -a = "- operator is called passing a as argument"
    temp.b = -c.b;

    return temp;
}

int main()
{
    Complex c1(1, 2);
    c1 = -c1;
    c1.getVal();
    return 0;
}