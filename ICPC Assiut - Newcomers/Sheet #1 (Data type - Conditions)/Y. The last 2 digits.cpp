#include <iostream>  
#include<iomanip>    
#include <string>    
#include <algorithm>
#include <cmath> 
using namespace std;

int main()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long f = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
    if (f > 9)
    {
        cout << f;
    }
    else
    {
        cout << 0  << f;
    }

    return 0;
}
