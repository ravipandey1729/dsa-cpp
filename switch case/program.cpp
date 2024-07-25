#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch(n){
    case 1:
        cout << "first case." << endl;
        break;
    case 3:
        cout << "third case." << endl;
        break;
    case 5:
        cout << "fifth case." << endl;
    default:
        cout << "it is default case" << endl;

    }
    cout<<endl;
}