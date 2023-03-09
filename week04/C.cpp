#include <iostream>

#ifndef N
#define N 5
#endif

using namespace std;

void f_0(int (&arr)[N], int ind, int l){
    if(2 * ind + 1 <= l & arr[ind] < arr[2 * ind + 1]) swap(arr[ind], arr[2 * ind + 1]);
    if(2 * ind + 2 <= l & arr[ind] < arr[2 * ind + 2]) swap(arr[ind], arr[2 * ind + 2]);
}

void cheops_sort(int (&arr)[N], int ind_l, int s){
    if(ind_l == 0) return;
    for(int i = ind_l; i >= 0; i--){
        f_0(arr, i, ind_l);
    }
    swap(arr[0], arr[ind_l]);
    cheops_sort(arr, ind_l - 1, s);
}

int main(){
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    cheops_sort(arr, N - 1, N);
    
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
