#include<iostream>
using namespace std;
// Constructor With Default Arguments
class Complex{
    private:
        int x;
        int y; 
    public:
        Complex(){ } 
        // Complex(int a){
        //     x = y = a;
        // }
        Complex(int a , int b = 0){
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

// Complex::Complex() And Complex::Complex(int a = 0) both are same constructors and cant be called in the same code as it will cause ambiguityd
                                   