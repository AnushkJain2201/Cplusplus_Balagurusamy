#include<iostream>
using namespace std;
// call by address
void swap(int *a , int *b){
    int temp = *a ; //dynamic initialization
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 20 , y = 30;
    swap(&x , &y);
    cout<<x<<" "<<y;
    return 0;
}


// here we pass the address of the variables as arguments