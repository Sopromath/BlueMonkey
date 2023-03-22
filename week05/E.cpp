#include <iostream>

bool reserve_memory(int* a, size_t N) {
    if (a == nullptr) {
        a = new int[N];
        return true;
    } else {
        return false;
    }
}

void free_memory(int* ptr) {
    delete [] ptr;
}

int main() {
    int N = 0;
    int* ptr = nullptr;
    cin >> N;
    cout << reserve_memory(ptr, N) << endl;
    free_memory(ptr);
    return 0;
}
