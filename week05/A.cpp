#include <iostream>

int main() {
    double* ptr;
    ptr = new double(0);
    cout << ptr << ' ' << *ptr << '\n';
    cout << ptr - 3 << ' ' << *(ptr - 3) << '\n';
    cout << ptr + 5 << ' ' << *(ptr + 5) << '\n';
    return 0;
}
