#include<iostream>
using namespace std;
// inline funtions
inline float mul(float x , float y){
    return (x*y);
}
inline double div(double p , double q){
    return (p/q);
}
int main()
{
    float a = 34.54;
    float b = 5.43;
    cout<<mul(a,b)<<endl;
    cout<<div(a,b)<<endl;
    return 0;
}

// keyword inline merely sends a request to compiler not a command so compiler can ignore the request if->
// 1. for function returning values 
// 2. if loop , goto , switch exists
// 3. if function contains static variables
// 4. if inline functions are recursive


