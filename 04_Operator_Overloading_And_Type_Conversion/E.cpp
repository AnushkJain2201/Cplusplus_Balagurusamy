#include<iostream>
using namespace std;
// overloading + operator as friend function 
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
       friend complex operator+(complex &, complex&);
       void display();
};
complex operator+(complex &c1 , complex &c2){
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
void complex::display(){
    cout<<real<<" + j"<<img<<endl;
}
int main()
{
    complex c1(10 , 20);
    complex c2(30 , 40);
    // complex c3 = operator+(c1,c2);
    complex c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}