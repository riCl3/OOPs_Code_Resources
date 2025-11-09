#include <bits/stdc++.h>
using namespace std;
class B; // B is decleared before A, because if not done so friend function 
         // at class A will throw an error as it does not recognises B
         // this technique is called Forward Declaration
class A{
    int a;

    friend void func(A,B);

    public:
    //Constructor
    A(int a){
        this->a = a;
    }
};

class B{
    int b;    
    
    friend void func(A,B);

    public:
    //Constructor
    B(int b){
        this->b = b;
    }
};

void func(A o1, B o2){
    cout<<o1.a + o2.b;
}

int main(){

    A o1(2);
    B o2(3);

    func(o1,o2); // <- Passing the parameters not arguments
    
    return 0;
}