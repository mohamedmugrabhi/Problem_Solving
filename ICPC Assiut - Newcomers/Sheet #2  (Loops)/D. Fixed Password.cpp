#include <iostream>  
#include <string>
#include <cmath>
#include <algorithm>
#include<iomanip>
using namespace std;
int main()
{
        int z;
        bool v = true;
        while (v)
        {
            cin >> z;
            if (z == 1999)
            {
                cout << "Correct" << endl;
                break; 
            }
            else
            {
                cout << "Wrong" << endl;
            }
        }

    return 0;
}
