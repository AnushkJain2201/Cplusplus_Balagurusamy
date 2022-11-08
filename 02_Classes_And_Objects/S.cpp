#include<iostream>
using namespace std;
// dereferencing operator (part 2)
// we can also design pointer to the member function which, then can be invoked using the dereferencing operators in the main as shown below:
// first method
//  (object-name . * pointer-to-member-fuction)(args/noargs)
// second method
//  (pointer-to-object -> * pointer-to-member-function)(args/noargs)
class M{
    private:
        int x;
        int y;
    public:
        void set_xy(int a , int b){
            x = a;
            y = b;
        }
        friend int sum(M m);
};
int sum(M m){
    // pointers to member variables of class
    int M::*px = &M::x;
    int M::*py = &M::y;
    // pointer to the object of the class
    M *pm = &m;
    int sum = m.*px + pm ->*py;
    return sum;
}
int main()
{
    M n;
    // pointer to member functions --- first Method
    void (M:: *pf)(int , int) = &M::set_xy;
    (n.*pf)(10,20);
    cout<<"The sum is "<<sum(n)<<endl;

    // pointer to member functions --- second method
    M *po = &n;
    (po ->*pf)(50 , 40);
    cout<<"The sum is "<<sum(n)<<endl;
    return 0;
}