#include <bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool p(long long n) {
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    fast();
  
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (p(n))
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
