#include <iostream>
#include <cmath>

using namespace std;

#ifndef N
#define N 3
#endif

#ifndef M
#define M 4
#endif


void sort2d(int (&arr)[N][M]){
    int i = 1;
    int j = 0;
    while (i < N*M){
        j = i;
        while ((arr[j/M][j%M] < arr[(j-1)/M][(j-1)%M]) and (j > 0)){
            swap(arr[j/M][j%M], arr[(j-1)/M][(j-1)%M]);
            j--;
        }
        i++;
    }
}

void print_arr(int (&arr)[N][M]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cout << arr[i][j];
            if (j < M-1){
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
    sort2d(A);
    print_arr(A);
    return 0;
}
