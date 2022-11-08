#include<iostream>
using namespace std;
// Static Member Functions
class Test{
    private:
        static int count;  //Static Member Variable
        int code;
    public:
        void setCode(){
            code = ++count;
        }
        void showCode(){
            cout<<"Object Number Is: "<<code<<endl;
        }
        static void showCount(){ //Static Member Function
            cout<<"Count: "<<count<<endl;
        }

        // This Will Not Work
        // static void showCount(){ 
        //     cout<<"Count: "<<code<<endl;
        // }
};
int Test::count;
int main()
{
    Test t1 , t2;
    t1.setCode();
    t2.setCode();
    Test::showCount();  //Accessing Static Member Function
    t1.showCode();
    Test t3;
    t3.setCode();
    t3.showCode();
    t2.showCode();
    Test::showCount();
    return 0;
}