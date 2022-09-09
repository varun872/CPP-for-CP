#include <iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
void sub(int a,int b)
{
    cout<<a-b<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    sub(a,b);
    return 0;
}