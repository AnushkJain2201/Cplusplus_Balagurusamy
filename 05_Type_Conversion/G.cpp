#include<iostream>
using namespace std;
// One class to another class type
// we can either use casting operator function or constructor function 
class invent2; // destination class declared
class invent1  // source class
{
    private:
        int code;
        int items;
        float price;
    public:
        invent1(int a , int b , float c){
            code = a;
            items = b;
            price = c;
        }
        void putdata(){
            cout<<"Code = "<<code<<endl;
            cout<<"Items = "<<items<<endl;
            cout<<"Value = "<<price<<endl;

        }
        int getCode(){return code;}
        int getItems(){return items;}
        float getPrice(){return price;}
        operator float(){return(items*price);}
//         operator invent2() // invent1 to invent2 by comparator operator function
//         {
//             invent2 temp;
//             temp.code = code;
//             temp.value = price *items;
//             return temp;

//         }
};
class invent2{  // destination class
    
    public:
        int code;
        float value;
        invent2(){
            code = 0;
            value = 0;
        }
        invent2(int x , int y){
            code = x;
            value = y;
        }
        void putData()
        {
            cout<<"Code: "<<code<<endl;
            cout<<"Value: "<<value<<endl;
        }
        invent2(invent1 p){ // constructor for conversion
            code = p.getCode();
            value = p.getItems() * p.getPrice();
        }
};

int main()
{
    invent1 s1(100 , 5 , 140.0);
    invent2 d1;
    float total_value;
    // invent1 to float 
    total_value = s1;
    // invent1 to invent2 
    d1 = s1;
    cout<<"Product details - invent1 type"<<endl;
    s1.putdata();
    cout<<"Stock Value"<<endl;
    cout<<"Value = "<<total_value<<endl;
    cout<<"Product details - invent2 type"<<endl;
    d1.putData();
    return 0;
}