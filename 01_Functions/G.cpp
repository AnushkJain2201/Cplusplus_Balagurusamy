#include<iostream>
using namespace std;
// default arguments

int main()
{
    float value(float p , int n , float q = 0.05);
    void printli(char ch = '*' ,int len = 5);

    cout<<value(143.54 , 4)<<endl;
    cout<<value(876.65 , 3 , 5.76)<<endl;
    printli();
    printli('_', 7);
    printli('&');
    return 0;
}

float value(float p , int n , float r = 0.05){
    int year = 1;
    float sum = p;
    while(year <= n){
        sum *= (1+r);
        year++;
    }
    return sum;
}

void printli(char ch = '*' ,int len = 5){
    for(int i = 1; i <= len ; i++){
        cout<<ch<<endl;
    }
}


// add default from right to left
// we cannot provide default value to a particular argument in the middle of the argument list
// it can be used to combine similar functions to one