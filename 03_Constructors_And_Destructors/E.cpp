#include<iostream>
using namespace std;
// there are three types of constructor 
// . non prameterized
// . parameterized
// . refernce to the object of the same class or copy constructor
class Integer{
    private:
        int m;
        int n;
    public:
        Integer(){
            m = 0;
            n = 0;
        }
        Integer(int x , int y){
            m = x;
            n = y;
        }
        Integer(Integer &i){
            m = i.m;
            n = i.n;
        }
};

int main()
{
    Integer I1;    
    Integer I2(20,30);
    Integer I3(I2);
    return 0;
}