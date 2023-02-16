#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, N, fn=1;
    cin >> n;
    while(n > 0){
        fn = fn*n;
        n=n-1;
    }
    cout << fn;
    return 0;
}
