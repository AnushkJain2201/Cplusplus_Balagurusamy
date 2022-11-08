#include<iostream>
using namespace std;
struct Room
{
    int width;
    int height;
    void setValue(int w , int h){
        width = w;
        height = h;
    }
};

int main()
{
    Room objroom;
    objroom.setValue(20 , 30);
    return 0;
}