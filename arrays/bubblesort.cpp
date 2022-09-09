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
    int counter=1;
    while(counter<n)
    {
        for(int j=0;j<n-counter;j++)
        {
            if(a[j]>a[j+1])
            {
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}