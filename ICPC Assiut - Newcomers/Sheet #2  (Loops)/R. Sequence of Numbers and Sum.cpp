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
    int a, b;
    while (true) {
        cin >> a >> b;
        if (a <= 0 || b <= 0)
            break;
        int x, y,s=0;
        if (a < b) {
            x = a;
            y = b;
        } else {
            x = b;
            y = a;
        }
        for (int i = x; i <= y; i++) {
            cout << i << " ";
            s += i;
        }
        cout << "sum =" << s << "\n";
    }
}
