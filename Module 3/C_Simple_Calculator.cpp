#include<iostream>
using namespace std;

int main() {
    int x, y;
    long long int mul, sum, diff;  
    cin >> x >> y;

    mul = static_cast<long long int>(x) * y;
    sum = x + y;
    diff = x - y;

    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << mul << endl;
    cout << x << " - " << y << " = " << diff;

    return 0;
}