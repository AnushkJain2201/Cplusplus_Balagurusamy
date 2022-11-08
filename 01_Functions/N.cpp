#include<iostream>
using namespace std;
void matrixInputDisplay(int c   , int r = 0){
    
    int mat[r][c];
    cout<<"Enter Elements"<<endl;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cin>>mat[i][j];
        }
    }
    cout<<endl;
    cout<<"The Matrix is"<<endl;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
int main()
{
    matrixInputDisplay(3,3);
    return 0;
}