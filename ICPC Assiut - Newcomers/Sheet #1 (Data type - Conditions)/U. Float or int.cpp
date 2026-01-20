#include <iostream>  
#include<iomanip>    
#include <string>    
#include <algorithm>
#include <cmath> 
using namespace std;

int main()
{
    double n;
    cin >> n;

    int x = (int)n;      
    double z = n - x;

    if (z == 0)
        cout << "int " << x;
    else
        cout << "float " << x << " " << z;

    return 0;
}
