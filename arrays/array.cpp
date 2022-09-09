#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // find max and min element in the array
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
            max=array[i];
        if(array[i]<min)
            min=array[i];
    }
    cout<<max<<" "<<min<<endl;
    return 0;
}