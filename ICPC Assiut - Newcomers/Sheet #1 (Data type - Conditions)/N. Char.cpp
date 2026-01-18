#include <iostream>      
   #include <string>    
using namespace std;

int main()
{
    char m;
    cin >> m;
  
    if (m >= 'a' && m <= 'z')
    {
        m = m - 32;
        cout << m;
    }
    else
    {
        m = m + 32;
        cout << m;
    }
    return 0;
}
