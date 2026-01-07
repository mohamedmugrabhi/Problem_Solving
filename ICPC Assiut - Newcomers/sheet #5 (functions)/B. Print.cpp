#include <bits/stdc++.h>
using namespace std;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void Print(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i;
        if (i < n)
            cout << " ";
    }
}

int main() {
    fast();

    int n;
    cin >> n;
    Print(n);

    return 0;
}
