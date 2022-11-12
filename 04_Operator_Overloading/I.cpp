#include<iostream>
using namespace std;
// overloading the pointer-to-member -> operator
class test{
    public:
        int num;
        test(int j){
            num = j;
        }
        test* operator-> (void){ // Here we use the * infront of test because this operator will return a pointer
            return this;
        }
};
int main()
{
    test T(5);
    test *ptr = &T;
    cout<<T.num<<endl; // Accessing num normally
    cout<<ptr->num<<endl; // Accessing num using normal object pointer
    cout<<T->num<<endl; // Accessing num using overloaded -> operator
    return 0;
}