#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the row and coulmn values: ";
    cin>>n>>m;
    int a[n][m]; // n is the number of rows and m is the number of columns
    cout<<"Enter the elements of the matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The matrix is"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    // searching an element in the matrix
    int x;
    cout<<"Enter the element to be searched: ";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
                cout<<"Element found at "<<i<<","<<j<<" position"<<endl;
                flag=true;
                break;
            }
        }
    }
    if(flag==false)
        cout<<"Element not found!!"<<endl;
    // spiral order traversal
    int row_start=0;
    int row_end=n-1;
    int column_start=0;
    int column_end=n-1;
    while(row_end>=row_start and column_start<=column_end)
    {
        // for row_start
        for(int i=column_start;i<=column_end;i++)
        {
            cout<<a[row_start][i]<<" ";
        }
        row_start++;
        // for column_end
        for(int j=row_start;j<=row_end;j++)
        {
            cout<<a[j][column_end]<<" ";
        }
        column_end--;
        // for row_end
        for(int k=column_end;k>=column_start;k--)
        {
            cout<<a[row_end][k]<<" ";
        }
        row_end--;
        // for column_start
        for(int l=row_end;l>=row_start;l--)
        {
            cout<<a[l][column_start]<<" ";
        }
        column_start++;
    }
    return 0;
}