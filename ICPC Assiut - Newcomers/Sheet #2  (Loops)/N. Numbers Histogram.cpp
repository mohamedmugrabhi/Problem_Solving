#include <iostream>  
#include <string>
#include <cmath>
#include <algorithm>
#include<iomanip>
using namespace std;
int main()
{
    string x;
    int d,f;
    cin >> x >> d;
    for (int i = 1; i <= d; i++) {
        cin >> f;
        if (x == "+") {
            for (int j = 1; j <= f; j++) {
                cout << "+";
            }
        }
        else if (x == "-") {
            for (int j = 1; j <= f; j++) {
                cout << "-";
            }
        }
        else  if (x == "/") {
            for (int j = 1; j <= f; j++) {
                cout << "/";
            }
        }
        else  {
            for (int j = 1; j <= f; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
