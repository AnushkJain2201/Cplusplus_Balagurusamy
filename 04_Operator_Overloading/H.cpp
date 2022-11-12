#include<iostream>
using namespace std;
// overloading the Subscript [] operator
class arr
{
    private:
        int a[5];
    public:
        arr(int *s){
            int i;
            for(i = 0 ; i < 5 ; i++){
                a[i] = s[i];
            }
        }
        int operator[] (int k){
            return a[k]; 
        }
};
int main()
{
    int x[5] = {11 , 22 , 33 , 44 , 55};
    arr A(x);
    for(int i = 0 ; i < 5 ; i++ ){
        cout<<A[i]<<endl; // Using subscript operator to access the private array elements
    }
    return 0;
}