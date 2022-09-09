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
    int sum1;
    for(int i=0;i<n;i++)
    {
        sum1=0;
        for(int j=i;j<n;j++)
        {
            sum1+=a[j];
            cout<<sum1<<endl;
        }
    }
    return 0;
}