#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int digits=0;
    int arm=0;
    while(temp)
    {
        digits=temp%10;
        arm=arm+pow(digits,3);
        temp=temp/10;
    }
    if(arm==n)
        cout<<"Yes "<<n<<" is an amrstrong number!!"<<endl;
    else
        cout<<"No "<<n<<" is not an amrstrong number!!"<<endl;
    return 0;
}