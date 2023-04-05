#include <iostream>
#include <string>

struct Students {
    std::string name;
    int required_score;
};

int main() {
    int M = 0;
    int s = 0;
    Students data[10];
  
    for (int i = 0; i < 10; i++) {
        std::cin >> data[i].name >> data[i].required_score;
    }
  
    std::cin >> M;
    std::string output[10];
  
    for (int i = 0; i < 10; i++) {
        if (data[i].required_score > M) {
            output[i] = data[i].name;
            s += 1;
        }
    }
    for (int i = 0; i < s; i++) {
        std::cout << output[i] << ' ' << std::endl;
    }
