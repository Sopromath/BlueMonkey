#include <iostream>
#include <cmath>

#ifndef N
#define N 10 // actual size of the array
#endif

using namespace std;

void reverse_arr(int a[], size_t n) {
    for (size_t i = 0; i<n/2; i++) {
        int t = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = t;
    }
}

void print_arr(int A[], int n) {
    for (int i = 0; i<n; i++) {
        cout << A[i] << " ";
    }
}

int main() {
    int n = N, i=0;
    int A[N] = {0};
    for (i = 0; i<N; i++) {
        cin >> A[i];
    }
    reverse_arr(A, N);
    print_arr(A, N);
    return 0;
}
