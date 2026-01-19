#include <iostream>  
#include<iomanip>    
#include <string>    
#include <algorithm>
#include <cmath> 
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        if (c < b)
        {
            cout << c << "\n" << b << "\n" << a << endl << "\n";
        }
    
        else 
        {
            cout << b << "\n" << c << "\n" << a<<endl << "\n";
        }
        
    }
    else if (b > a && b > c)
    {
        if (a > c)
        {
            cout << c << "\n" << a << "\n" << b << endl << "\n";
        }
        else
        {
            cout << a << "\n" << c << "\n" << b<<endl << "\n";
        }
        
    }
    else if (c > a && c > b) 
    {
        if (a > b)
            cout << b << "\n" << a << "\n" << c<<endl<<"\n";
        else
        {
            cout << a << "\n" << b << "\n" << c << endl << "\n";
        }
        
    }
    else if (a == b ) {
        if(c<a)
            cout << c << "\n" << a << "\n" << a << endl << "\n";
        
    else
            cout << a << "\n" << a << "\n" << c << endl << "\n";
    }
    else if (a == c) {
        if (b < a)
            cout << b << "\n" << a << "\n" << a << endl << "\n";

        else
            cout << a << "\n" << a << "\n" << b << endl << "\n";
    }
    else if (c == b) {
        if (c < a)
            cout << c << "\n" << c << "\n" << a << endl << "\n";

        else
            cout << a << "\n" << c << "\n" << c << endl << "\n";
    }
    else
    {
        cout << a<<"\n" << a << "\n" << a<<endl <<"\n";
    }
    cout << a << "\n" << b << "\n" << c;
    return 0;
}
