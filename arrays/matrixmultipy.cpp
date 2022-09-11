#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1][n2],b[n2][n3],c[n1][n3];
    cout<<"Enter the elements in the matrix1"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements in the matrix2"<<endl;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>b[i][j];
        }
    }
    // initialising the resultant matrix
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            c[i][j]=0;
        }
    }
    // Matrix Multiplication
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"The resultant matrix is"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}