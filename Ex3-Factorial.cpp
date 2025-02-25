// add your code here
#include <iostream>
using namespace std;

int main(){
    for (int n=1; n<=10; n++){
        int fact = 1;
        for (int i = 1; i<=n; i++){
            fact = fact*i;
        }
        cout << "The factorial of " << n << " is " << fact << '\n';
    }
    return 0;
}