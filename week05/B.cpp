#include <iostream>

void print(size_t s, short* arr) {
    for (size_t i = 0; i < s; i++) {
        cout << *(arr + i) << ' ';
    }
    cout << endl;
}

int main() {
    short* arr;
    size_t s = 10;
    arr = new short[10];
    for (size_t i = 0; i < s; i++) {
        arr[i] = i;
        cout << arr + i << ' ';
    }
    print(s, arr);
    for (size_t i = 0; i < s; i += 2) {
        *(arr + i) *= *(arr + i);
    }
    print(s, arr);
    return 0;
}
