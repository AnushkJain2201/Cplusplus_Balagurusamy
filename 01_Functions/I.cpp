#include<iostream>
using namespace std;
// recursion for factorial
int fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        n = n*fact(n-1);
        return n;
    }
}
int main()
{
    cout<<"Enter Any Number";
    return 0;
}