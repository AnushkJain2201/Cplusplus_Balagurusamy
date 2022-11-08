#include<iostream>
using namespace std;
// pointers to class members
class A{
    private:
        int m = 12;
    public:
        void display(A a);
};
void A::display(A a){
// We can define a pointer to the member m as follows:
    int A::* ip = &A::m;
    // int *p = &m; will not work
    
    // both will display the same 
    cout<<a.*ip<<endl;
    cout<<a.m<<endl;
    // cout<<a.*p<<endl; will not work

}
int main()
{
    A b;
    A c;
    
    b.display(c);
    
    
    return 0;
}