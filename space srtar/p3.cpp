#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // Print leading spaces
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        // Print stars
        int j = n - i + 1;
        while (j)
        {
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
