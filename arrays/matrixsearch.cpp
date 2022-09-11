// input matrix has sorted rows and columns. search for a specific element
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter the elements in the matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cout<<"Enter the element to be searched: ";
    cin>>x;
    int r=0;
    int c=m-1;
    bool flag=false;
    while(r<n and c>=0)
    {
        if(a[r][c]==x)
            flag=true;
        if(a[r][c]>x)
            c--;
        else
            r++;
    }   
    if(flag==true)
        cout<<"Element found!!"<<endl;
    else
        cout<<"Element not found!!"<<endl;
    return 0;
}