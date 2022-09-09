#include <iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        int tmp=a[i];
        int j=i-1;
        while(a[j]>tmp and j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=tmp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}