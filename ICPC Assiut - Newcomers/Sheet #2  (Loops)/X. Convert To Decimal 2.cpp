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

    int t;
    cin >> t;
  
    while (t--) {
        int n;
        cin >> n;
        int o = 0;
        int x = n;
        while (x > 0) {
            int r = x % 2;
            if (r == 1)
                o++;
            x /= 2;
        }
        int a = 0;
        for (int i = 0; i < o; i++) {
            a = a * 2 + 1;
        }
        cout << a << "\n";
    }

  return 0;
}
