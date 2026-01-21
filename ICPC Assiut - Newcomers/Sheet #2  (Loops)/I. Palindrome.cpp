#include <iostream>  
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  
    long long num;
    cin >> num;

    long long x = num, y = 0;

    while (num > 0) {
        int d = num % 10;
        y = y * 10 + d;
        num /= 10;
    }

    cout << y << "\n";

    if (y == x)
        cout << "YES";
    else
        cout << "NO";
}
