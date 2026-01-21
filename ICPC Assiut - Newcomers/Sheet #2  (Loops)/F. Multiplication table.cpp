#include <iostream>  
#include <string>
#include <cmath>
#include <algorithm>
#include<iomanip>
using namespace std;
int main()
{
    short x;
    cin >> x;
    for (int i = 1; i <= 12; i++) {
        cout << x << " * " << i << " = " << x * i<<endl;
    }

    return 0;
}
