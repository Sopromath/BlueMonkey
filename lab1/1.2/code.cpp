#include <iostream>
#include <fstream>
#include <cmath>
#include <chrono>
#include <random>
using namespace std;

int arr[1000000];
ofstream fout("Lab 11.txt");

int rnd(int arr[], int r) {
    unsigned seed = 1001;
    default_random_engine rng(seed);
    uniform_int_distribution <unsigned> dstr(0, r - 1);
    return arr[dstr(rng)];
}

void sqr(int arr[], int size, long int n) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (arr[i] + arr[j] == n && i != j) {
                break;
            }
        }
    }
}

void lin(int arr[], int size, long int n) {
    int first = 0;
    int last = size - 1;
    int sum;
    while (first < last) {
        sum = arr[first] + arr[last];
        if (sum == n) {
            break;
        }
        else {
            if (sum < n) {
                first++;
            }
            else {
                last--;
            }
        }
    }
}

void time_sqr(int arr[], int size) {
    unsigned seed = 1001;
    default_random_engine rng(seed);
    uniform_int_distribution <unsigned> dstr(0, size - 1);
    auto begin = chrono::steady_clock::now();
    for (unsigned cnt = 10000; cnt != 0; --cnt) {
        sqr(arr, size, arr[dstr(rng)]);
    }
    auto end1 = chrono::steady_clock::now();
    auto time_span1 =
        chrono::duration_cast<chrono::milliseconds>(end1 - begin);

    fout << time_span1.count() << ';';

    for (unsigned cnt = 10000; cnt != 0; --cnt) {
        sqr(arr, size, 20000000);
    }
    auto end = chrono::steady_clock::now();
    auto time_span =
        chrono::duration_cast<chrono::milliseconds>(end - end1);

    fout << time_span.count();
}

void time_lin(int arr[], int size) {
    unsigned seed = 1001;
    default_random_engine rng(seed);
    uniform_int_distribution <unsigned> dstr(0, size - 1);
    auto begin = chrono::steady_clock::now();
    for (unsigned cnt = 100000; cnt != 0; --cnt) {
        lin(arr, size, arr[dstr(rng)]);
    }
    auto end1 = chrono::steady_clock::now();
    auto time_span1 =
        chrono::duration_cast<chrono::milliseconds>(end1 - begin);

    fout << time_span1.count() << ';';

    for (unsigned cnt = 100000; cnt != 0; --cnt) {
        lin(arr, size, 20000000);
    }
    auto end = chrono::steady_clock::now();
    auto time_span =
        chrono::duration_cast<chrono::milliseconds>(end - end1);

    fout << time_span.count();
}

int main() {
    for (int i = 0; i < 1000000; ++i) {
        arr[i] = i;
    }
    for (int N = 100; N <= 10000; N += 50) {
        fout << N << ';';
        //time_sqr(arr, N);
        time_lin(arr, N);
        fout << endl;
    }
    fout.close();
    return 0;
}
