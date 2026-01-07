#include <bits/stdc++.h>
using namespace std;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

string toBinary(int n) {
    string res = "";
    if (n == 0)
        return "0";
    while (n > 0) {
        res = char((n % 2) + '0') + res;
        n /= 2;
    }
  
    return res;
}

bool isPalindrome(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
  
    return true;
}

int main() {
    fast();

    int n;
    cin >> n;

    if (n % 2 == 1 && isPalindrome(toBinary(n)))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
