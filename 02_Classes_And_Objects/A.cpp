#include<iostream>
using namespace std;
class Items{
    private:
        int number;
        int cost;
    public:
        int getData(int a , int b);
        void putData();

};

// defintion outside class
int Items::getData(int a , int b){
    number = a;
    cost = b;
}
void Items::putData(){
        cout<<number<<endl;
        cout<<cost<<endl;
}
int main()
{
    Items x , y;
    x.getData(22 , 34);
    x.putData();

    
    y.getData(32 , 76);
    y.putData();
    return 0;
}