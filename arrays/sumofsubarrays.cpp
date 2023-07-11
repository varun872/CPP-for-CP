#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum += arr[j];
        }
    }

    cout<<"The sum of all the sub-arrays is: "<<sum<<endl;
    return 0;
}