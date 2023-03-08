#include <iostream>

#ifndef N
#define N 5
#endif

using namespace std;

void swap(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void dwarf_sort(int (&m)[N]) {
    for (int i = 0; i < N; i++) {
        for (int j = i; j > 0; j--) {
            if (m[j] < m[j - 1]) {
              swap(m[j], m[j - 1]);
            }
        }
    }
}

int main() {
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    dwarf_sort(array);

    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
