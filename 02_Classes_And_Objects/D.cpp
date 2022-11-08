#include<iostream>
using namespace std;
// nesting of member function
// A member function can be directly called by using it's name inside another member function of the same class
class Binary{
    private:
        string s;
    public:
        void read(){
            cout<<"Enter A Binary Number: ";
            cin>>s;
        }
        void chk_bin(){
            for(int i = 0 ; i < s.length() ; i++)
            {
                if(s.at(i) != '0' && s.at(i) != '1'){
                    cout<<"Inncorrect Binary Input"<<endl;
                    cout<<"Program Is Quitting"<<endl;
                    cout<<"Chal Nikal Behan Ke Lawde"<<endl;
                    
                    exit(0);
                }
            }
        }
        void ones(){
            chk_bin();
            for(int i= 0 ; i < s.length() ; i++){
                if(s.at(i) == '1'){
                    s.at(i) = '0';
                }
                else{
                    s.at(i) = '1';
                }
            }
        }
        void displayOnes(){
            ones();
            cout<<"The 1's Compliment Of The Above Binary Number is: "<<s;
        }
};
int main()
{
    Binary b;
    b.read();
    b.displayOnes();
    return 0;
}