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
    
    // do while loop
    // This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true
    int i = 0;
    do {
        cout << i << endl;
        i = i+1;
    }
    while (i < 6);

    // for each loop
    int num[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    for (int i : num ) {
    cout << i << endl;
    }
    return 0;
}