#include<iostream>
using namespace std;
int gValue = 10;
void display(){
    cout<<gValue<<endl;
}

int main()
{
    display();
    {
        int gValue = 20;
        cout<<gValue<<endl;
        cout<<::gValue<<endl;
    }
    return 0;
}