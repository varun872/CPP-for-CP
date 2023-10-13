#include<iostream>
using namespace std;
int main()
{
    // Same datatypes which are there is C programming are used in C++.
    int a=10;
    cout<<a<<endl;
    cout<<"Size of int is: "<<sizeof(a)<<endl;
    string s="Varun";
    cout<<s<<endl;
    cout<<"Size of string is: "<<sizeof(s)<<endl;
    char c='a'; //for char in C++ should be in single quotes otherwise it throws error.
    cout<<c<<endl;
    cout<<"Size of character is: "<<sizeof(c)<<endl;
    float f=12.56; //difference btw float and double is just that double has more precision.
    cout<<f<<endl;
    cout<<"Size of float is: "<<sizeof(f)<<endl;
    double db=34.567;
    cout<<db<<endl;
    cout<<"Size of double is: "<<sizeof(db)<<endl;
    bool b=true; //boolean true prints 1 and likewise boolean false prints 0.
    cout<<b<<endl;
    cout<<"Size of boolean is: "<<sizeof(b)<<endl;
    int const i=69; //const vaules cannot be changed if tried to change it throws error.
    cout<<i;
    return 0;
}