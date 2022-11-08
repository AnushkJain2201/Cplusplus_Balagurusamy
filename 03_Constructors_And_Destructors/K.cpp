#include<iostream>
using namespace std;
// const objects


class Matrix{
    private:
        int **p;  
        int d1 , d2;  
    public:
        Matrix(int x , int y);
        // void setValue(int i , int j , int value){
        //     p[i][j]=value;
        // }
        int &getValue(int i , int j){
            return p[i][j];
        }
};
Matrix::Matrix(int x , int y){
    d1 = x;
    d2 = y;
    p = new int *[d1];  
    for(int i = 0 ; i<d1 ; i++){
        p[i] = new int [d2]; 
    }
}
int main()
{
    int m , n;
    cout<<"Enter Size Of Matrix: ";
    cin>>m>>n;
    const Matrix A(m,n);  // const object of matrix class 
    // any attempt to modify the value of m and n will return in compilation error
    cout<<"Enter Matrix Elements Row By Row"<<endl;
    int i , j , value;
    for( i = 0 ; i < m ; i++){
        for( j = 0 ; j < n ; j++){
            cin>>value;
            // A.setValue(i , j , value);
        }
        cout<<endl;
    }
    
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < n ; j++){ 
        }
        cout<<endl;
    }
    return 0;
}