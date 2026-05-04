#include<iostream>
using namespace std;

int main() {
    int a, b, c, d {-1};
    cin >> a >> b >> c;
    cout << a << " " << b << " " << c << endl;
    d = a;
    a = b;
    b = c;
    c = d;
    cout << a << " " << b << " " << c << endl;
    return 0;
}