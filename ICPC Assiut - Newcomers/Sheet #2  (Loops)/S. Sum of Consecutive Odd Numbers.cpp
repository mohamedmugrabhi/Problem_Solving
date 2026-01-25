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
        int x, y;
        cin >> x >> y;

        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        int s = 0;

        for (int i = x + 1; i < y; i++) {
            if (i % 2 != 0)
                s += i;
        }

        cout << s << "\n";
    }
}
