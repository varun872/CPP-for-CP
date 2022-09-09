#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<0)
        cout<<"Not a palindrome!!"<<endl;
    else
    {
        int temp=n;
        int rev=0;
        while(temp)
        {
            rev=rev*10;
            rev=rev+temp%10;
            temp=temp/10;
        }
        if(rev==n)
            cout<<"The inputted number is a Palindrome!!"<<endl;
        else
            cout<<"The inputted number is not a Palindrome!!"<<endl;
    }
    return 0;
}