#include <iostream>

using namespace std;

bool V_year(int h) {
    if(h%4==0 && (h%100 != 0 || h%400 == 0) ){
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int year;
    cin >> year;
    if( V_year(year) ){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
