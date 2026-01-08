#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

/*=========================================================== FUNCTION ==================================================*/

void fast(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
}

void freqchar(int n, char c) {
    for(int i = 0; i < n; i++) {
        cout << c << " ";
    }
}

/*=========================================================== MAIN ======================================================*/

int main(){
    fast();

    int t;
    cin >> t;
    while(t--) {
        int n;
        char c;
        cin >> n >> c;
        freqchar(n, c);
        cout << endl;
    }
  
    return 0;
}
