#include<iostream>
using namespace std;
// Static  Member Variables
class Items{
    private:
        static int count;
        int number;
    public:
        void getData(int a){
            number = a;
            count++;
        }
        void getCount(){
            cout<<"The Count Is: "<<count<<endl;
        }
};
int Items::count; //The Definition Of Static Members ; The Type And Scope Of Static Member Variables Must Be Defined Outside Definition Because Static Members Are Stored Separately. They Are Also Known As class variables
// We Can Also Initialize It As -->
// int item::count = 10;
int main()
{
    Items a , b , c;
    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300);

    a.getCount();
    b.getCount();
    c.getCount();

    return 0;
}