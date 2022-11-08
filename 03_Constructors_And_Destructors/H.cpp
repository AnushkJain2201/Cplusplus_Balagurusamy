#include<iostream>
using namespace std;
// copy constructor
//  we cannot pass the argument by value in constructor

class code{
    private:
        int id;
    public:
        code(){
        
        }
        code(int a){
            id = a;
        }
        code(code &x){
            id = x.id;
        }
        void display(){
            cout<<id<<endl;
        }
};
int main()
{
    code A(100);  
    code B(A);
    code C = A;
    code D;
    D = A;
    A.display();
    B.display();
    C.display();
    D.display();
    return 0;
}