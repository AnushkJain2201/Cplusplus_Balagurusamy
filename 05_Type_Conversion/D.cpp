#include<iostream>
using namespace std;
// Another example for conversion from int types to class type
class time{
    private:
        int hrs;
        int mins;
    public:
        time(){};
        time(int t){
            hrs = t/60;
            mins = t%60;
        }
};
int main()
{
    time t1; // object created
    int duration = 85;
    t1 = duration; // int to class type
    return 0;
}