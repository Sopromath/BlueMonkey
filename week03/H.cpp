#include <iostream>
#include <cmath>

using namespace std;

#ifndef N
#define N 3
#endif

#ifndef M
#define M 4
#endif

void print_transp(int (&arr)[N][M]){
    for (int j = 0; j < M; j++){
        for (int i = 0; i < N; i++){
            cout << arr[i][j];
            if (i < N-1){
                cout << ' ';
            }
        }
        cout << endl;
    }
}

int main() {
    int A[N][M] = {0};
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> A[i][j];
        }
    }
    print_transp(A);
    return 0;
}
