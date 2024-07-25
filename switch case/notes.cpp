#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the amount : ";
    cin >> n;
    int hundreds = 0, fifties = 0, twenties = 0, ones = 0;
    int step = 0;
    while(step<4){
        switch(step){
            case 0:
            if(n>=100){
                hundreds = n / 100;
                n = n % 100;
            }
                step++;
                break;
            case 1:
            if(n>=50){
                fifties = n / 50;
                n = n % 50;
            }
                step++;
                break;
            case 2:
            if(n>=20){
                twenties = n / 20;
                n = n % 20;
            }
                step++;
                break;
            case 3:
            if(n>=1){
                ones = n / 1;
                n = n % 1;
            }
                step++;
                break;
        }
    }
    cout << "the hundreds: " <<hundreds<<endl;
    cout << "the fifties: " << fifties<<endl;
    cout << "the twenties: " <<twenties<<endl;
    cout << "the ones: " << ones<<endl;
    return 0;
}