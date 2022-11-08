#include<iostream>
using namespace std;
// destructor
// whenever new is used to allocate memory in the constructors we should use delete to free that memory

// for previous example 
// Matrix :: ~Matrix(){
//     for(int i = 0 ; i < d1 ; i++){
//         delete p[i];
//         delete p;
//     }
// }

class Test{
    private:
        static int count;
    public:
        Test(){
            count++;
            cout<<"Object Number "<<count<<" is created"<<endl;    
        }
        ~Test(){
            cout<<"Object Number "<<count<<" is destroyed"<<endl;
            count--;
        }
};
int Test::count = 0; 
int main()
{
    Test T1;
    cout<<"Hello"<<endl;
    Test T2 , T3 , T4;
    cout<<"hmmmm"<<endl;
    return 0;
}

// note that object are destroyed in the reverse order of their creation