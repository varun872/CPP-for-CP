#include<iostream>
using namespace std;
int main()
{
    // 'if' and 'else' can be used together to create conditions
    // It returns 1 if the condition is true and 0 if the condition is false
    // Program to find the largest element
    int a,b,c;
    cout<<"Enter 3 values: ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
            cout<<a<<" is the largest element"<<endl;
        else
            cout<<c<<" is the largest element"<<endl;
    }
    else if(a==b)
    {
        if(a>c)
            cout<<a<<" is the largest element"<<endl;
        else if (a==c)
            cout<<"All elements are equal"<<endl;
        else
            cout<<c<<" is the largest element"<<endl;
    }
    else
    {
        if(b>c)
            cout<<b<<" is the largest element"<<endl;
        else
            cout<<c<<" is the largest element"<<endl;
    }
    return 0;
}