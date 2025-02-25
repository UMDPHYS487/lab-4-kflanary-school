// add your code here
#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int N = -1;
    while (N<0){
        cout << "Please enter a nonnegative integer value: ";
        cin >> N;
        if (N >= 0) {
            cout << "The value you entered is " << N << " and its factorial is " << factorial(N) << '\n';
        }
    }
    return 0;
}