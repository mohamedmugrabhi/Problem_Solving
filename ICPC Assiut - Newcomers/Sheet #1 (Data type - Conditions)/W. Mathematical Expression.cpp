#include <iostream>  
#include<iomanip>    
#include <string>    
#include <algorithm>
#include <cmath> 
using namespace std;

int main()
{
    int a, b;
    long long c,v;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == '*') {
        v = a * b;
        if (c == v)
            cout << "Yes";
        else
            cout << v;
    }
    else if (s == '-')
    {
        v=a-b;
        if(c==v)
            cout<<"Yes";
        else
        cout << v;
    }
    else
    {
        v = a + b;
        if (c == v)
            cout << "Yes";
        else
        cout << v;
    }

    return 0;
}
