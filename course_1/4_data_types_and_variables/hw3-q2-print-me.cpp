#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (b + 1) * a * a << endl << (b - 1) * (2 * a + 1) << endl;
    cout << ((b + 1) * a * a - (b - 1) * (2 * a + 1)) / 2;
    // So I initially did (1/2) * (The expression). Which gives ZERO because 1/2 is 0!!!!! 
    return 0;
}