// add your code here
#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Give me a number: ";
    cin >> N;

    if(N<10 && N%2 == 0){
        cout << "Your number is " << N << " and its square is " << N*N << "\n";
    }
    else if (N%2 == 1){
        float k = N*(.5);
        cout << "Your number is " << N << " and its half is " << k << "\n";
    }
    else{
        cout << "hahaha\n";
    }
    return 0;
}