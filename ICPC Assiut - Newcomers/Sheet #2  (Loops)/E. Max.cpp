#include <iostream>  
  #include <string>
    #include <cmath>
      #include <algorithm>
       #include<iomanip>
using namespace std;
int main()
{
    int x,max;
    cin>> x>>max;
    for (int i = 1; i < x; i++) {
        long long f;
        cin >> f;
        if (f > max) {
            max = f;
        }
    }
    cout << max;
      return 0;
}
