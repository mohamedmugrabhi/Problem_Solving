#include <iostream>  
#include <string>
#include <cmath>
#include <algorithm>
#include<iomanip>
using namespace std;
int main()
{
    long long x,s,a;
    cin >> x;
    int i = 1;
    while (i <= x) {
        cin >> s;
        if (s == 0) {
            cout << 0;
        }
        while (s > 0) {
            a = s % 10;
            s = s / 10;
            cout << a<<" ";
        }
        cout << endl;
        i++;
    }
    return 0;
}
