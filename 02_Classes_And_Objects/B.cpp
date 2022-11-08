#include<iostream>
using namespace std;
class Items{
    private:
        int number;
        int cost;
    public:
        // defintion insinde class
        // inline function declaration
        int getData(int a , int b){
            number = a;
            cost = b;
        }
        void putData(){
            cout<<number<<endl;
            cout<<cost<<endl;
        }

};


int main()
{
    Items x;
    x.getData(22 , 34);
    x.putData();

    Items y;
    y.getData(32 , 76);
    y.putData();
    return 0;
}