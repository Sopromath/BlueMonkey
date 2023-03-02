#include <iostream>
#include <cmath>
using namespace std;



bool poly(long int a) {
    long int  b = a;
    int i = 0, n = 0;
    long int k, r, t;
    while (b > 0) {
        i++;
        b = b / 10;
    }
    k = i / 2;
    //cout << k << endl;
    for (int j = 1; j <= k; ++j) {
        r = a % 10;
        t = a / (pow(10, i - 1));
        if (r == t) {
            n++;
        }
        a = a - t * (pow(10, i - 1));
        a = a/10;
        i = i - 2;
        //cout << a << endl;
    }
    if (n == k) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    long int a;
    cin >> a;
    if (poly(a)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
