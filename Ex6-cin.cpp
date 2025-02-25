// add your code here
#include <iostream>
using namespace std;

int y;
int *x;

int main(){
    y = 10;
    x = &y;
    cout << "Value of y is: " << y << '\n';
    cout <<"Its pointer: " << x <<'\n';
    cout <<"Value at that pointer: " << *x << '\n';

    cout << "Give y a new value: ";
    cin >> y;

    cout << "The new value of y is: " << y << '\n';
    cout <<"Its pointer: " << x <<'\n';
    cout <<"Value at that pointer: " << *x << '\n';    
    return 0;
}