#include <bits/stdc++.h>
using namespace std;

void fast(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void s(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    fast();
  
    int x, y;
    cin >> x >> y;
    s(x, y);
    cout << x << " " << y; 
  
    return 0;
}
