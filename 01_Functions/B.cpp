#include<iostream>
using namespace std;
int main()
{
    float fun(int , float , float);
    return 0;
}

// we can neglect the variables in the declaration because they are dummy variables
// the compiler only checks the type of declaration
float fun(int x , float y , float z){
    float v = x+y+z;
    return v;
}
// in time of definition names of variable is required because the arguments are referenced inside the function