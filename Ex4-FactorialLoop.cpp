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
    for (int i=1; i<=10; i++){
        cout << "The factorial of " << i << " is " << factorial(i) << '\n';
    }
    return 0;
}