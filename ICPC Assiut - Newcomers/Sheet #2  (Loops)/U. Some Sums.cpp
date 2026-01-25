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

    int n, a, b;
    cin >> n >> a >> b;
    int s = 0;
    for (int i = 1; i <= n; i++) {
        int x = i;
        int y = 0;
        while (x > 0) {
            int d = x % 10;
            y += d;
            x /= 10;
        }
        if (y >= a && y <= b)
            s += i;
    }
    cout << s;
  
return 0;
}
