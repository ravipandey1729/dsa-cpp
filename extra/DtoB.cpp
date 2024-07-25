#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, digit, ans = 0;
    while(n!=0)
    {
        digit = n & 1;
        ans = (digit*pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans;
    return 0;
}