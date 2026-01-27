#include <iostream>  
 #include <string>
  #include <cmath>
   #include <algorithm>
    #include <iomanip>

using namespace std;
int main() {
    fast();


    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n / 2; i++) {

        int  j = n - i - 1;

        if (s[i] != '?' && s[j] != '?') {

            if (s[i] != s[j]) {
                cout << -1 << endl;
                return 0;
            }

        }

        else if (s[i] == '?' && s[j] != '?') {
            s[i] = s[j];
        }

        else if (s[i] != '?' && s[j] == '?') {
            s[j] = s[i];
        }

        else {
            s[i] = s[j] = 'a';
        }

    }

    if (n % 2 == 1 && s[n / 2] == '?') {
        s[n / 2] = 'a';
    }

    cout << s << endl;

    return 0;
}
