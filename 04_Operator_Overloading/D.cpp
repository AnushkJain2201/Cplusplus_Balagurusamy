#include<iostream>
using namespace std;
// overloading + operator as member function 
class complex{
    private:
        int real;
        int img;
    public:
       complex(){

       } 
       complex(int real , int img){
            this->real = real;
            this->img = img;
       }
       complex operator+(complex);
       void display();
};
complex complex::operator+(complex c){
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}
void complex::display(){
    cout<<real<<" + j"<<img<<endl;
}
int main()
{
    complex c1(10 , 20);
    complex c2(30 , 40);
    // complex c3 = c1.operator+ c2;
    complex c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}