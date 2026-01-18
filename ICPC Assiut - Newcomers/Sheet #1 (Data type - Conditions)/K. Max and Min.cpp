#include <iostream>  
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
  
    if (a > b && a > c) {
        if (b > c)
            cout << c << " " << a;
        else
            cout <<  b<< " " << a;
    }
    if (b > a && b > c) {
        if (a > c)
            cout << c << " " << b;
        else
            cout << a << " " << b;
    }
    if (c > b && c > a) {
        if (b > a)
            cout << a << " " << c;
        else
            cout << b << " " << c;
    }
    else if(a==b&&a>c)
    
        cout << c << " " << a;
    
    else if (a == c && a > b)
    
        cout << b << " " << c;
    
    else if (c == b && a < c)
    
        cout << a << " " << c;
    if (a == b) {
        if (b == c)
            cout << a << " " << a; 
  }
}
 
