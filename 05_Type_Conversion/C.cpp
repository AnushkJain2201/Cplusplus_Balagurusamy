#include<iostream>
using namespace std;
// Data Conversion ==> Basic to Class type
int main()
{
    string s1 , s2;
    char* name1 = "hello there";
    char* name2 = "hi there";
    s1 = (string)name1; // first converts name1 from char* type to string type and then assigns the string type values to object s1
    s2 = name2; // also does the same job by invoking the constructor implicitly
    return 0;
}