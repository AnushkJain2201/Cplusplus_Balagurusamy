#include<iostream>
const int size = 3;
using namespace std;
// Overloading operators using friends
class vector
{
    private:
        int v[size];
    public:
        vector(); // constructs null vector
        vector(int *x); // constructs vector from array
        friend vector operator* (int a , vector b);
        friend vector operator* (vector b , int a);
        friend istream &operator>> (istream &, vector &);
        friend ostream &operator<< (ostream &, vector &);
};

vector::vector(){
    for(int i = 0 ; i < size ; i++){
        v[i] = 0;
    }
}
vector::vector(int *x){
    for(int i = 0 ; i < size ; i++){
        v[i] = x[i];
    }
}
vector operator* (int a , vector b){
    vector c;
    for(int i = 0 ;  i < size ; i++){
        c.v[i] = a*b.v[i];
    }
    return c;
}
vector operator* (vector b , int a){
    vector c;
    for(int i = 0 ; i < size ; i++){
        c.v[i] = b.v[i]*a;
    }
    return c;
}
istream & operator>>(istream &ins , vector &b){
    for(int i = 0 ; i < size ; i++){
        ins>>b.v[i];
    }
    return ins;
}
ostream &operator<<(ostream &out , vector &b){
    for(int i = 0 ; i < size ; i++){
        out<<b.v[i];
    }
    return out;
}
int x[size]  =  {2,4,6};
int main()
{
    vector m; // invokes constructor 1
    vector n = x; // invokes constructor 2
    cout<<"Enter The values of VEctor m: ";
    cin>>m;
    cout<<endl;
    cout<<"m: "<<m<<endl;

    vector p , q;
    p = 2 * m;
    q = n * 2;
    cout<<"p: "<<p<<endl;
    cout<<"q: "<<q<<endl;
    return 0;
}