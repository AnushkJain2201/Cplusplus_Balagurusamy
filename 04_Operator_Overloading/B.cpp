#include<iostream>
using namespace std;
// defining operator overloading
// return type classname :: operator op(arglist)
// {
        // funtion body // task defined
// }

// here operator is a keyword
// operator function can be member funtion(non static) or friend function
// friend function will have one argument for unary operators and will have two argument for binary operators
// a member function will have no argument for unary operators and will have one argument for binary operators
// vector operator+(vector)  // binary vector addition
// vector operator+() // urnary vector operator
// friend vector operator+(vector , vector) // friend binary
// friend vector operator+(vector) // friend unary

// overloading unary minus as member function
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
        void operator-();
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
void space::operator- (){
    x = -x;
    y = -y;
    z = -z;
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