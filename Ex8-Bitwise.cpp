// add your code here
#include <iostream>
#include <bitset>
using namespace std;

int main(){
    bitset<8> b{0b01110010};
        cout << b << " (initial value)\n";

        for (int i = 0; i < 8; i++){
            if(b.test(i) == true){
                b.reset(i);
            }
            else{
                b.set(i);
            }
            cout << b << '\n';
        }
        cout << b << " (final value) \n";
    return 0;
}