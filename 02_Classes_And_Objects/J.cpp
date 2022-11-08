#include<iostream>
using namespace std;
// Object As Arguments

class Time{
    private:
        int hour;
        int min;
    public:
        void setTime(int hour , int min){
            this->hour = hour;
            this->min = min;
        }
        void getTime(){
            cout<<hour<<" Hours And "<<min<<" Minutes"<<endl;
        }

        void sum(Time t1, Time t2); //declaration with object as arguments
};
void Time::sum(Time t1 , Time t2){
    min = t1.min + t2.min;
    hour = min/60;
    min = min%60;
    hour = hour + t1.hour + t2.hour;
}
int main()
{
    Time t1 ,t2 , t3;
    t1.setTime(2,35);
    t2.setTime(3,30);

    t3.sum(t1 , t2);

    t1.getTime();
    t2.getTime();
    t3.getTime();
    return 0;
}