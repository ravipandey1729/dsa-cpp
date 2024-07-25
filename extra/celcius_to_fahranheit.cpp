#include<iostream>
using namespace std;
int main()
{
    float c=0.0f, f=0.0f;
    cout << "fahranheit: ";
    cin >> f;
    c = (f - 32) * (5.0f / 9.0f);
    cout << c << " " << "cecius" << endl;
    return 0;
}