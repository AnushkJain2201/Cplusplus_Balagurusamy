#include<iostream>
using namespace std;
// Array Of Objects
class Employee{
    private:
        string name;
        int age;
    public:
        void getData();
        void showData();
};
void Employee::getData(){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Ente Age: ";
    cin>>age;
}
void Employee::showData(){
    cout<<"************************"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"************************"<<endl;
}
const int size = 3;
int main()
{
    Employee manager[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"Enter Details Of Manager Number "<<i+1<<endl;
        manager[i].getData();
    }
    cout<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<"Manager "<<i+1<<endl;
        manager[i].showData();
    }
    return 0;
}