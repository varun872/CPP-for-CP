#include <iostream>
using namespace std;
int main()
{
    // for loop
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<endl;

    // while loop
    int x;
    cin>>x;
    while(x>0)
    {
        cout<<"The value of x is: "<<x<<endl;
        cin>>x; // The while loop stops as soon as x is -ve
    }
    return 0;
}