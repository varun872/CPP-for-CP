#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=31;i++)
    {
        if(i%2==0)
        {
            continue; // if the condition is not met is skips the lines beneath
        }
        cout<<"You can go out today "<<i<<endl;
    }

    // check if a number is prime or not
    int n;
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        cout<<"Prime Number!"<<endl;
    else
        cout<<"Not a Prime Number!"<<endl;
    return 0;
}