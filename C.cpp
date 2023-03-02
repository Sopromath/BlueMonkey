#include <iostream>
using namespace std;

bool recursive_d(int n) {
    if(n!=1){
        while(n%2==0){
            n = n/2;
        }
        if(n==1){
                return true;
        }
        else {
                return false;
        }

    }
    else {
        return false;
    }
}


int main(){
    int n;
    cin >> n;
        if( recursive_d(n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
