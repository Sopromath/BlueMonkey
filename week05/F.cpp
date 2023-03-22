#include <iostream>
#include <cstring>

char *resize(const char *buf, size_t size, size_t new_size) {
    char* new_buf = new char[new_size];
    size_t min_size = min(size, new_size);
    for (size_t i = 0; i < min_size; i++) {
        new_buf[i] = buf[i];
    }
    delete [] buf;
    return new_buf;
}

int main() {
    char *a = new char[10];
    cout << resize(a, 10, 10) << endl;
    delete [] a;
    return 0;
}
