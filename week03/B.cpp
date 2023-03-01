#include <iostream>
#include <cmath>

#ifndef N
#define N 5  // actual size of the array
#endif

using namespace std;

void reverse_arr(int a[], int b, int c) {
    while (b<c) {
        int t = a[b];
        a[b] = a[c];
        a[c] = t;
        b++;
        c--;
    }
}

void print_arr(int A[], int n) {
    for (int i = 0; i<n; i++) {
        cout << A[i] << " ";
    }
}

int main() {
    int i = 0;
    int A[N] = {0};
    for (i = 0; i<N; i++) {
        cin >> A[i];
    }
    reverse_arr(A, 0, N-1);
    reverse_arr(A, 1, N-1);
    print_arr(A, N);
    return 0;
}
