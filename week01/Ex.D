#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a0, b0, a, b, q, r;
    cin >> a0 >> b0;
    if(a0 < b0){
        a = b0;
        b = a0;
    }
    else{
        a = a0;
        b = b0;
    }
    while(r!=0){
        r = a %b ;
        q = (a - r)/b;
        a = b;
        b = r;
    }
    cout <<a;
    return 0;
}
