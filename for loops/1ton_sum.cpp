#include<iostream>
using namespace std;
int main()
{
    int sum = 0, i,n;
    cin >> n;
    for (i = 0; i <= n;i++)
    {
        sum = sum + i;
        
    }
    cout << sum << " is the sum.";
    return 0;
}