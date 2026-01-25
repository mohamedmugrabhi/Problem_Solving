#include <iostream>  
#include <string>
#include <cmath>
#include <algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = x; x = i; i--) {
        for(int j=1;j<=i;j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}
