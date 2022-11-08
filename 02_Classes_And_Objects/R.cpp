#include <iostream>
using namespace std;
// dereferencing operators (part 1)
// ->* the dereferencing operator is used to access a member when we use pointers to both the objext and the member.
class A
{
private:
    int m = 12;

public:
    void display(A a);
};
void A::display(A a)
{
    int A::* ip = &A::m;
    // ap is pointer to object a
    A *ap = &a;
    // both will display the same
    cout<<ap->*ip<<endl;
    cout<<ap->m<<endl;

}
int main()
{
    A b;
    A c;

    b.display(c);

    return 0;
}
