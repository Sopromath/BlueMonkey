#include <iostream>
#include <string>

struct Students {
    std::string name;
    int required_score;
};

void swap(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swap_str(string &a, string &b) {
    string tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int M = 0;
    int N = 0;
    int s = 0;
  
    std::cin >> N;
    Students data[N];
    for (int i = 0; i < 10; i++) {
        std::cin >> data[i].name >> data[i].required_score;
    }
    std::cin >> M;
    
    for (int i = 0; i < N; i++) {
        if (data[i].required_score > M) {
            output[n] = data[i].name;
            p[i] = data[i].required_score;
            s += 1;
        }
    }
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (p[j] >= p[j + 1]) {
                if (p[j] == p[j + 1]) {
                    if ((output[j]).compare(output[j + 1]) > 0) {
                        swap_str(output[j], output[j + 1]);
                    }
                } else {
                    swap(p[j], p[j + 1]);
                    swap_str(output[j], output[j + 1]);
                }
            }
        }
    }
  
    for (int i = 0; i < s; i++) {
        std::cout << output[i] << ' ' << std::endl;
    }
    return 0;
}
