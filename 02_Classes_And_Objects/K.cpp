#include<iostream>
using namespace std;
// friendly functions
// a non member function that we want to share wwith many classes 
// unlike member functions, it cannot access the member names directly and has to use an object name and dot membership operator with each member name
// it can be declared in both private and public part of a class 
// usually it has object as arguments
class Test{
    private:
        int a ;
        int b;
    public:
        void setValue(){
            a = 25;
            b = 40;
        }
        friend float mean(Test t);
};
float mean(Test t){
    return (t.a + t.b)/2.0;
}
int main()
{
    Test m;
    m.setValue();
    cout<<"Mean Is "<<mean(m)<<endl;
    return 0;
}