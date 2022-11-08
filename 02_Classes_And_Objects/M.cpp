#include<iostream>
using namespace std;
// A function friendly to two classes 

class ABC; //forward declaration -> the function max() has arguments from both XYZ and ABC. when the function max() is declared as frriend in XYZ for the first time the compiler will not acknowledge the presence of ABC unless it's name is declared in the beginning.

class XYZ{
    private:
        int x;
    public:
        void setValue(int i){ x = i;}
        friend void max(XYZ, ABC);
};

class ABC{
    private:
        int a;
    public:
        void setValue(int i){ a = i;}
        friend void max(XYZ , ABC);
};

void max(XYZ m , ABC n){
    if(m.x > n.a){
        cout<<m.x;
    }
    else{
        cout<<n.a;
    }
}
int main()
{
    ABC abc;
    abc.setValue(10);
    XYZ xyz;
    xyz.setValue(20);
    max(xyz , abc);
    return 0;
}