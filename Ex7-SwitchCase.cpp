// add your code here
#include <iostream>
using namespace std;

int main(){
    int N, Truth;
    bool truth1, truth2;
    float k;

    cout << "Give me a number: ";
    cin >> N;

    truth1 = N%2 == 1 || -N%2 == 1; truth2 = N < 10;
    Truth = 20*truth1 + truth2;

    switch(Truth){
        case 20:
            k = N*(.5);
            cout << "Your number is " << N << " and its half is " << k << "\n";
            break;
        case 21:
            k = N*(.5);
            cout << "Your number is " << N << " and its half is " << k << "\n";
            break; 
        case 1:
            k = N*N;
            cout << "Your number is " << N << " and its square is " << k << "\n";
            break;
        case 0:
            cout<<"hahaha\n";
            break;
    }
    return 0;
}