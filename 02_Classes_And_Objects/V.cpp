#include<iostream>
using namespace std;
class Bank{
    private:
        string name;
        int accNo;
        string accType;
        int balance = 1000;
    public:
        // Bank(string name , int accNo , string acccType){
        //     this->name = name;
        //     this->accNo = accNo;
        //     this->accType = acccType;
        // }
        void assignValue();
        void depositAmmount();
        void withdraw();
        void display();
};
void Bank::assignValue(){
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Enter Account Number: ";
    cin>>accNo;
    cout<<"Enter Account Type: ";
    cin>>accType;
    cout<<"Value Assigned"<<endl;
}
void Bank::depositAmmount(){
    cout<<"Enter The Amount To Be Deposited: ";
    int depo;
    cin>>depo;
    balance += depo;
    cout<<"Amount Deposited"<<endl;

}
void Bank::withdraw(){
    cout<<"Enter The Amount To Be Withdrawn: ";
    int withd;
    cin>>withd;
    if(balance >= withd){
        balance -= withd;
        cout<<"Amount Withdrawn"<<endl;
    }
    else{
        cout<<"Insufficient Balance"<<endl;
    }
}
void Bank::display(){
    cout<<"Name Is "<<name<<endl;
    cout<<"Balance Is Rs."<<balance<<endl;
}
int main()
{
    Bank a;
    a.assignValue();
    a.display();
    a.depositAmmount();
    a.display();
    a.withdraw();
    a.display();
    return 0;
}