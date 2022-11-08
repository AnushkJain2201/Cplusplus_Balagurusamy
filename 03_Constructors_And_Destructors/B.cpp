#include<iostream>
using namespace std;
// parameterized constructor
class Integer{
    private:
        int m;
        int n;
    public:
        Integer(int x , int y);
};
Integer ::Integer(int x , int y){
    m = x;
    n = y;
}
int main()
{
    // we can pass the initial value as arguments in two ways
    // . by calling the constructor explicitly
    Integer int1 = Integer(20 , 40);
    // . by calling the constructor implicitly
    Integer int2(30 , 60);
                                  
    return 0;
}