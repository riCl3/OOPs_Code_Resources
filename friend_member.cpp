#include <bits/stdc++.h>
using namespace std;

class B; // Forward declaration so A can reference B

/*
We will make A a friend of B,
so that all member functions of A
can access private members of B.
*/

class A
{
    int a;

public:
    A(int a)
    {
        this->a = a;
    }

    void showB(B obj); // Function that will access B's private data
};

class B
{
    int b;

public:
    B(int b)
    {
        this->b = b;
    }

    // Declare entire class A as a friend
    friend class A;
};

/*
Here, function A::showB() can access
private member `b` of class B,
because A is declared as a friend of B.
*/
void A::showB(B obj)
{
    cout << "Accessing private member of B from A: b = " << obj.b << endl;
}

int main()
{
    /*
    Goal of this example:
    - To show that if class A is made a friend of class B,
      then *all member functions* of A can access private members of B.
    */

    A objA(10);
    B objB(20);

    objA.showB(objB); // Output: b = 20

    return 0;
}
