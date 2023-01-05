#include <iostream>
using namespace std;
int main()
{
    // use the length() function to get the length of a string
    string txt = "NumeroTres";
    cout << "The length of the word is: " << txt.length() << endl;
    // We can access the characters in a string by referring to its index number inside square brackets []
    string word = "Programming";
    cout << word[ 2 ] <<endl;
    cout << word[ 4 ] <<endl;
    // use the compare() function to compare 2 strings
    string fname = "varun";
    string lname = "ramurs";
    cout << fname.compare(lname) <<endl;
    // use the + operator to concatenate 2 strings
    cout << fname + " " + lname <<endl;
    return 0;
}