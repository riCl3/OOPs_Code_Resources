#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a;
    int b;

    public:
    Complex(int a, int b){
        this->a = a;
        this->b = b;
    }

    void getVal(){
        cout<<a<<" "<<b;
    }

    friend Complex func(Complex c);
};

Complex func(Complex c){
    Complex temp(0,0);
    temp.a = c.a+1;
    temp.b = c.b+1;

    return temp;
}

int main(){
    Complex c(1,2);
    c = func(c);
    c.getVal();
    return 0;
}