#include <iostream>  
#include<iomanip>    
#include <string>    
#include <algorithm>
#include <cmath> 
using namespace std;

int main()
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

   
    if (r1 < l2 || r2 < l1) {
        cout << -1;
    }
    else {

        if (l1 > l2)

            cout << l1;
            
        else
            cout << l2;
            
        if (r1 < r2)
            cout << " " << r1;
            
        else
            cout << " " << r2;

    }
    return 0;
}
