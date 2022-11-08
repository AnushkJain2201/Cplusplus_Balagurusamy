#include<iostream>
using namespace std;


// overloading unary minus as friend function
// it takes one operand and convert into negative
class space
{
    private:
        int x;
        int y;
        int z;
    public:
        void setData(int x , int y , int z);
        void display();
        friend void operator-(space &s);
};
void space::setData(int x , int y , int z){
    this->x = x;
    this->y = y;
    this->z = z;
}
void space::display(){
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
}
void operator- (space &s){
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}
int main()
{
    space s;
    s.setData(10 , -20 , 30);
    cout<<"s: ";
    s.display();
    -s;
    cout<<"-s: ";
    s.display();
    return 0;
}