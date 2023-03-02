#include <iostream>
using namespace std;

int recursive_Fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if(n > 0)
    {
        return n*recursive_Fact(n-1);
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    cout << recursive_Fact(n);
    return 0;
}
