#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows and columns ";
    cin >> n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}