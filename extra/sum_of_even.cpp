#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=0;
    cin >> n;
    while(i<=n)
    {
        sum += i;
        i = i + 2;
    }
    cout << "sum is " << sum;
    return 0;
}