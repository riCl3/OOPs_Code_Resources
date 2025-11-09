#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    Complex(int a = 0, int b = 0)
    {
        this->a = a;
        this->b = b;
    }

    void getVal()
    {
        cout << a << " " << b;
    }

    friend ostream& operator<< (ostream&, Complex);
    friend istream& operator>> (istream&, Complex&);
};

ostream& operator<<(ostream& dout ,Complex c){   
    dout<<"a = "<<c.a<<" "<<"b = "<<c.b;

    return dout;
}

istream &operator>>(istream &din, Complex &c){
    din>>c.a>>c.b;   
    return din;
}

int main()
{   /* When we write "cout<<" we actually pass "cout" function as an 
       argument of the operator "<<". That means eg: <<(cout,int)
       To use the "cout<<" for our Complex function:
       -> The return type of "cout<<" should be same as that of "cout",
        because suppose "cout<<a<<b", then "cout<<a" should 
        return "cout" so that "cout<<b" can get formed

       -> The return type of "cout" is "ostream", we can not create the 
        object of ostream, therefore we pass it by reference "&"
    */
    Complex c1(1, 2);
    cout<<c1<<endl;

    Complex c2;
    cout << "Enter real and imaginary part: ";
    cin >> c2;
    cout << "You entered: " << c2 << endl;
    return 0;
}

// FRIEND FUNCTION IS THE ONLY WAY TO OVERLOAD INSERTION AND EXTRACTION OVERLOADING