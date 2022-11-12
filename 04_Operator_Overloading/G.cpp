#include<iostream>
#include<string.h>
using namespace std;
// Matematical Operations On Strings Using Operator Overloading
class String
{
    private:
        char *p;
        int len;
    public:
        String(){len = 0 ; p = 0;} // create null string
        String(const char *s); // create string from arrays
        String(const String &s); // copy constructor
        ~String(){delete p;} // destructor
        friend String operator+(const String &s , const String &t); // overloading + operator
        friend int operator<=(const String &s , const String &t); //   overloading <= operator
        friend void show(const String s);
};
String :: String(const char *s){
    len = strlen(s);
    p = new char[len + 1];
    strcpy(p , s);
}
String :: String(const String &s){
    len = s.len;
    p = new char[len + 1];
    strcpy(p , s.p );
   
}
String operator+(const String &s , const String &t){
    String temp;
    temp.len = s.len + t.len;
    temp.p = new char[temp.len + 1];
    strcpy(temp.p , s.p);
    strcat(temp.p , t.p);
    return temp;
}
int operator<=(const String &s , const String &t){
    int m = strlen(s.p);
    int n = strlen(t.p);
    if(m <= n){
        return 1;
    }
    else{
        return 0;
    }
}
void show(const String s){
    cout<<s.p<<endl;
}
int main()
{
    String s1 = "New ";
    String s2 = "York";
    String s3 = "Delhi";
    String s4 = s1 + s3;
    cout<<"String1 = ";
    show(s1);
    cout<<"String2 = ";
    show(s2);
    cout<<"String3 = ";
    show(s3);
    cout<<"String4 = ";
    show(s4);
    if(s1 <= s4){
        show(s1);
        cout<<" smaller than ";
        show(s4);
        cout<<endl;
    }

    return 0;
}