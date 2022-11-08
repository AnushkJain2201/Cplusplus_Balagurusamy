#include<iostream>
using namespace std;
// memory allocation to an object using destructor

class Test{
    private:
        int *a;
    public:
        Test(int size)
        {
            a = new int[size];
            cout<<"Constructor had created a integer array of size "<<size<<" is created"<<endl;
        }
        ~Test(){
            delete a;
            cout<<"Destructor had freed up memory allocated for integer array"<<endl;
        }
};
int main()
{
    int a;
    cout<<"Enter the size of an array "<<endl;
    cin>>a;
    Test T(a);

    return 0;
}
