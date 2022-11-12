#include<iostream>
using namespace std;
// x convert to integer before its value is assigned to m, the fractional part get truncated.
// but this is only possible for built in data type.
int main()
{
    int m ;
    float x = 7.5436;
    m = x;
    cout<<m<<endl;
    return 0;
}