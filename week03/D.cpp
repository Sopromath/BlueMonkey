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
    int i = 0, j = 0, s=0;
    int A[N] = {0};
    for (i = 0; i<N; i++) {
        cin >> A[i];
    }
    for (j = 0; j<N; j++) {
        if (A[s] < 0){
            reverse_arr(A, s, N-1);
            reverse_arr(A, s, N-2);

        }
        else
        {
            s++;
        }
        print_arr(A, N);
        cout <<endl;
    }

    return 0;
}
