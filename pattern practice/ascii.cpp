#include<iostream>
using namespace std;
int main()
{
    char n;
    cin >> n;
    if(n<=90&&n>=65)
        cout << "the character is upper case.\n";
    else if(n>=97&&n<=122)
        cout << "the character is lower case.\n";
    else if(n>=48&&n<=57)
        cout << "it is numeric.\n";
    else
        cout << "invalid input.";
    return 0;
}