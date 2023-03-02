#include <iostream>
using namespace std;

bool simple_nomber(int a) {
    int k = a/2, r = 2;
    while(r <= k){
        if(a%r == 0){
            return false;
        }
        r++;
    }
    return true;

}

int main() {
    int a;
    cin >> a;
    if (simple_nomber(a)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
