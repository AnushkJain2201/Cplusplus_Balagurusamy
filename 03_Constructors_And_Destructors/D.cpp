#include<iostream>
using namespace std;
// the parameter of a constructor can be of any type except that of the class which it belongs
// however a constructor can accept a reference to its own class as parameter
class A{
    public:
        // A(A); NOT OKAY
        A(A&); //its okay ( copy constructor )

};
int main()
{
    
    return 0;
}