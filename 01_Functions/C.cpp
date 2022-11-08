#include<iostream>
using namespace std;
// call by reference
void swap(int &a , int &b){
    int temp = a ; //dynamic initialization
    a = b;
    b = temp;
}
int main()
{
    int x = 20 , y = 30;
    swap(x , y);
    cout<<x<<" "<<y;
    return 0;
}


// here x and y has become alias to a and b