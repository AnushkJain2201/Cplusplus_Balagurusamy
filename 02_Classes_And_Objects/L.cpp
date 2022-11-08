#include<iostream>
using namespace std;
// member function of one class can be friend function of another class. In such cases they are declared using the scope resolution operator 
// the function func1() is the member of class X and friend of class Y
class X{
    public:
        int fun1();
};

class Y{
    friend int X::fun1();
};

// we can declare all the member funrion of one class as the friend functions of another class in such cases the class is called friend class
class Z{
    friend class X;
};

int main()
{
    
    return 0;
}