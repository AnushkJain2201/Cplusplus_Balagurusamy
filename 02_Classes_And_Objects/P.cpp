#include<iostream>
using namespace std;
// const Member Functions
// The qualifier const is appended to the functions prototype ( in both declaration and definition ). This will prevent the function to alter any data value in the class
class Test{
    private:
        int x;
    public:
        void mul(int , int ) const;
};

void Test::mul(int a , int b) const{

}
int main()
{
    
    return 0;
}