#include <bits/stdc++.h>
using namespace std;

void fast() {
 
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
}

int main() {
    fast();


    int x,y;
    cin >> x >> y;

     int z = 0;

    while (x <= y) {

        x *= 3;
        y *= 2;

        z++;

    }

    cout << z;

    return 0;
}
