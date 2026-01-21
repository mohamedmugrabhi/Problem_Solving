#include <iostream>  
  #include <string>
    #include <cmath>
      #include <algorithm>
       #include<iomanip>
using namespace std;
int main()
{
    
    short t;
    cin >> t;
    for (int i = 1; i <= t; i++) 
    {
        int c;
        cin >> c;
        long long f = 1;
        for (int r = 1; r <= c; r++)
        {
            f *= r;
        }
        cout << f << endl;
    }
      return 0;
}
