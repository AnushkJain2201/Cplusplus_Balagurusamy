#include<iostream>
using namespace std;
// 2D Array
// constructing matrix object

class Matrix{
    private:
        int **p;  //create an array pointer
        int d1 , d2;  // dimensions
    public:
        Matrix(int x , int y);
        void setValue(int i , int j , int value){
            p[i][j]=value;
        }
        int &getValue(int i , int j){
            return p[i][j];
        }
};
Matrix::Matrix(int x , int y){
    d1 = x;
    d2 = y;
    p = new int *[d1];  // create an array pointer
    for(int i = 0 ; i<d1 ; i++){
        p[i] = new int [d2]; // create space for each row
    }
}
int main()
{
    int m , n;
    cout<<"Enter Size Of Matrix: ";
    cin>>m>>n;
    Matrix A(m,n); // matrix object created
    cout<<"Enter Matrix Elements Row By Row"<<endl;
    int i , j , value;
    for( i = 0 ; i < m ; i++){
        for( j = 0 ; j < n ; j++){
            cin>>value;
            A.setValue(i , j , value);
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