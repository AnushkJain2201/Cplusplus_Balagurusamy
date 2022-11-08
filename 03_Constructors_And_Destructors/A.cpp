#include<iostream>
using namespace std;
// class with constructor
class Integer{
    private:
        int m ;
        int n;
    public:
        Integer();
        // a constructor which accepts no arguments are default constructors
        // if no such constructor is defined then the compiler supplies a default constructor
};
Integer :: Integer(){
    m = 0;
    n = 0; 
}
int main()
{
    Integer int1;
    
    return 0;
}