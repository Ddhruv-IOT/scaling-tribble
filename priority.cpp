#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    int c = a + b * 10;
    std::cout << c << std::endl;

    int p, q;
    p = 1;
    q = p++;
    cout << p << " " << q << endl;

    int x, y, z;
    x = 3;
    y = 4;
    z = ++x * y--;
    cout << x << " " << y << " " << z << endl;

    int e = 10, f = 5, g = 5;
    int h = 0;
    h = f + g == e;
    cout << h << endl;

    bool i = (true && true);
    cout << i << endl;

    i = (true && false);
    cout << i << endl;

    i = (true || false);
    cout << i << endl;

    i = (false || false);
    cout << i << endl;

    int j = 4;
    cout << (2 ^ j) << endl;

    cout << ( 2 & j) << endl;

    cout << ( 2 << 1) << endl;

    cout << ( 3 ^ j)   << endl;

    return 0;
}