#include<iostream>
using namespace std;
// return by refernece
int & max(int &a , int &b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int x = 33;
    int y = 45;
    // cout<<max(x , y)<<endl;
    int a = max(x,y);
    max(x,y) = -1;
    cout<<a;
    // max(x , y) = -1;
    // cout<<x;
    // cout<<y;
    // cout<<max(x , y);
    
    return 0;
}