#include<iostream>
using namespace std;
// local classses
// classes that are defined and used inside the functions or blocks are called local classes
// local classes can use global variable with the scope resolution 
// local classes can also use static variables declared inside the function
// enclosing function cannot access the private member of the local class unless it is declared friend
void test(int a)  // function
{
    // ----
    // ----
    class Student{ // local class declaration 
        // ----
        // ---- // local class definition
        // ----
    };
    // ----
    // ----
    Student s1; // local class object
    // ----
    // ---- use local class object

}
int main()
{
    
    return 0;
}