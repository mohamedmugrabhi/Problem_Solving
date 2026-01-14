#include <iostream>
  #include<iomanip>
      #include <cmath>
using namespace std;

int main()
{
    float r; double area; double pi = 3.141592653;
    cin >> r;
    area = (r * r) * pi;
    cout << fixed << setprecision(9)<<area;
    return 0;
}
