#include<iostream>
using namespace std;
// proccessing Shopping List

const int m = 50;

class Items{
    private:
        int itemCode[m];
        float itemPrice[m];
        int count;

    public:
        void CNT(){count = 0;}
        void getItem();
        void displaySum();
        void remove();
        void displayItems();
};

void Items::getItem(){
    cout<<"Enter Item Code"<<endl;
    cin>>itemCode[count];
    cout<<"Enter Item Price"<<endl;
    cin>>itemPrice[count];
    count++;
}

void Items::displaySum(){
    float sum = 0;
    for(int i = 0 ; i < count ; i++){
        sum = sum + itemPrice[i];
    }
    cout<<"The Total Price Is Rs. "<<sum<<endl;
}

void Items::remove(){
    int a;
    cout<<"Enter Item Code : "<<endl;
    cin>>a;
    for(int i = 0 ; i < count ; i++){
        if(itemCode[i] == a){
            itemPrice[i] = 0;
        }
    }
}

void Items::displayItems(){
    cout<<"Code  Price"<<endl;
    for(int i = 0 ; i < count ; i++){
        cout<<itemCode[i]<<"  "<<itemPrice[i]<<endl;
    }

}

int main()
{
    Items order;
    order.CNT();
    int x;

    do{
        cout<<"Choose From The Following Options"<<endl;
        cout<<"1 : Add An Item"<<endl;
        cout<<"2 : Display Total Value"<<endl;
        cout<<"3 : Delete An Item"<<endl;
        cout<<"4 : Disply All Items"<<endl;
        cout<<"5 : Quit"<<endl;
        cout<<"Choose From The Following Options"<<endl;
        cout<<"Enter Your Option Here:"<<endl;

        cin>>x;

        switch(x)
        {
            case 1 : order.getItem();
            break;
            case 2 : order.displaySum();
            break;
            case 3 : order.remove();
            break;
            case 4 : order.displayItems();
            break;
            case 5 : break;
            default : cout<<"Wrong Input , Try Again"<<endl;
        }

    } while(x != 5);
  
    
    return 0;
}