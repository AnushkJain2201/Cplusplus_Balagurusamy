#include<iostream>
using namespace std;
// Swapping private data of class 
// altering the values of private member is against the basic principle of data hiding. it should be used when absolutely necessary

class class_2;

class class_1{
    private:
        int value1;
    public:
        void setData(int a){value1 = a;}
        void displayData(){cout<<"Value is "<<value1<<endl;}
        friend void swap(class_1 & , class_2 &);
};

class class_2{
    private:
        int value2;
    public:
        void setData(int a){value2 = a;}
        void displayData(){cout<<"Value is "<<value2<<endl;}
        friend void swap(class_1 & , class_2 &);
};

void swap(class_1 & x , class_2 & y){
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}
int main()
{
    class_1 c1;
    class_2 c2;

    c1.setData(40);
    c2.setData(60);
    
    swap(c1 , c2);

    c1.displayData();
    c2.displayData();
    return 0;
}