#include <iostream>
using namespace std;
// Returning Object
class Matrix
{
private:
    int m[3][3];

public:
    void enterElement();
    void displayMatrix();
    friend Matrix transpose(Matrix);
};
void Matrix::enterElement()
{
    cout << "Enter Elements Of 3x3 Matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "m[" << i << "][" << j << "] = ";
            cin >> m[i][j];
        }
    }
}
void Matrix::displayMatrix()
{
    cout << "The Matrix Is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m[i][j];
        }
        cout << endl;
    }
}

Matrix transpose(Matrix m1)
{
    Matrix m2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m2.m[i][j] = m1.m[j][i];
        }
    }
    return m2;
}
int main()
{
    Matrix m1 , m2;
    m1.enterElement();
    cout<<"***********************"<<endl;
    m1.displayMatrix();
    cout<<"***********************"<<endl;
    m2 = transpose(m1);
    m2.displayMatrix();
    return 0;
}