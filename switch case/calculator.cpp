#include<iostream>
using namespace std;
int  main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    char op;
    cout << "Enter the operation: ";
    cin >> op;
    switch(op){
    
        case '+':
            cout << "the sum is: ";
            cout<<a+b;
            break;
        case '-':
            cout << "the substraction is : ";
            cout<<a-b;
            break;
        case '*':
            cout << "the multiplication is: ";
            cout << a * b;
            break;
        case '/':
            cout << "the division is: ";
            cout << a / b;
            break;
        case '%':
            cout << "the remainder is: ";
            cout << a % b;
            break;
        default:
            cout << "the default statement.";
    }

}