#include <iostream>  
using namespace std;

int main()
{
    char x;
    cin >> x;
  
    if (x >= '0' && x <= '9')
        cout << "IS DIGIT";
    else if(x>='a'&&x<='z')
        cout << "ALPHA\nIS SMALL";
    else
        cout<<"ALPHA\nIS CAPITAL";
    return 0;
}
 
