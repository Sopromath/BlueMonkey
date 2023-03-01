#include <iostream>
#include <cmath>

using namespace std;

#ifndef N
#define N 5  // actual size of the array
#endif

int binsearch_arr(int arr[N]) {
    bool flag = false;
    int l = 0;
    int r = N-1;
    int m;
    while ((l<=r) && (flag != true)) {
        m = (l + r)/2;
        if (arr[m] == 1) {
            flag = true;
        }
        if (arr[m] > 1) {
            r = m-1;
        } else {
            l = m+1;
        }
    }
    return m-1;
}

int main() {
    int A[N] = {0};
    for (int i = 0; i<N; i++) {
        cin >> A[i];
    }
    cout << binsearch_arr(A) << endl;
    return 0;
}
