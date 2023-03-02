#include <iostream>
using namespace std;

Chet( int a){
    int r = 0;
    if(a != 0){
        if (a%2 == 0){
            r++;
        }
        int b;
        cin>>b;
        r = r + Chet(b);

    }
    return r;
}

int main() {
    int k;
    cin >> k;
    cout<< Chet(k);
    return 0;
}
