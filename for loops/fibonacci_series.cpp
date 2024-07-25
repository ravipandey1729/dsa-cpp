#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int first = 0, second = 1;
    cout << first << " " << second << " ";
    int nextNumber;
    for (int i = 1; i <= n;i++)
    {
        nextNumber = first + second;
        first = second;
        second = nextNumber;
        cout <<" "<< nextNumber<<" ";
    }
        
    return 0;
}