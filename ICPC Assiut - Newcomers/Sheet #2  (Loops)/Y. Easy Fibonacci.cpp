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
  
    int n;
    cin >> n;
  
    int x = 0, y = 1;
  
    for (int i = 1; i <= n; i++) {
        cout << x << " ";
        int z = x + y;
        x = y;
        y = z;
    }
  
    return 0 ;
}
