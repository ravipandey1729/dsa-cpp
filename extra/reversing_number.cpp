#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int digit, ans = 0,i=0;
    while (n != 0)
    {
        digit = n % 10;
        ans = (ans * 10) + digit;
        n = n / 10;
        i++;
    }
    cout << ans;
    return 0;
}