#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(i+j-1<=n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}