#include <iostream>
#include <cmath>

#ifndef N
#define N 3  // actual size of the array
#endif

using namespace std;

void print_arr(int arr[], int n) {
    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int i = 0, j = 0;
    int A[N] = {0};
    int B[N] = {0};
    for (i = 0; i<N; i++) {
        cin >> A[i];
    }
    for (i = 0; i<N; i++) {
        cin >> B[i];
    }

    int C[2*N] = {0};

    for (int s = 0; s < 2*N; s++) {
        if (s < N) {
            C[s] = A[s];
        } else {
            C[s] = B[s - N];
        }
    }

    for (int i = 0; i < 2*N-1; i++) {
        for (int j = 0; j < 2*N-1; j++) {
            if (C[j+1] < C[j]) {
                swap(C[j+1], C[j]);
            }
        }
    }
    print_arr(C, 2*N);
    return 0;
}
