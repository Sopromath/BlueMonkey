#include <iostream>

int main() {
    int [1000]={1};
    int i = 0;
    cin >> arr[0];
    while (arr[i] != 0) { 
        ++i;
        cin >> arr[i];
    }
    for (int j = 0; j < i - 1; ++j) { 
        cout << arr[j] - arr[j+1] << endl;
    }
}
