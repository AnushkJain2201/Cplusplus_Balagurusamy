#include<iostream>
using namespace std;
// overloaded constructor
class Complex{
    private:
        int x;
        int y; 
    public:
        Complex(){ } // once we define a constructor we must also define the do-nothing implicit constructor
        Complex(int a){
            x = y = a;
        }
        Complex(int a , int b){
            x = a;
            y = b;
        }

        friend Complex sum(Complex , Complex);
        friend void show(Complex);
        
};
Complex sum(Complex c1 , Complex c2){
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}
void show(Complex c){
    cout<<c.x<<" + "<<c.y<<"i"<<endl;
}
int main()
{
    // implicit call
    Complex c1(2 , 3);
    Complex c2(1);
    Complex c3;
    c3 = sum(c1 , c2);
    show(c1);
    show(c2);
    show(c3);

    // explicit call
    Complex p , q , r;
    p = Complex(23,45);
    q = Complex(43);
    r = Complex();
    r = sum(p,q);
    show(p);
    show(q);
    show(r);
    return 0;
}