// use binary search only when the elements are in a sorted manner
#include <iostream>
using namespace std;
int binsearch(int a[],int n,int key)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]>key)
            high=mid-1;
        else if(a[mid]<key)
            low=mid+1;
        else
            return mid;
    }
    return -1;
}
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
    int key;
    cout<<"Enter the element to be found: ";
    cin>>key;
    cout<<binsearch(a,n,key)<<endl;
    return 0;
}