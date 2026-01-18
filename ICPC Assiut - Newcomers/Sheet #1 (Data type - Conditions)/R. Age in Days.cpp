#include <iostream>   
using namespace std;

int main()
{
    int x;
    cin >> x;
  
    int z = x / 365;
  
    cout << z << " " << "years"<<endl;
    int w = (x%365 )/30;
    cout << w << " " << "months"<<endl;
    int e = (x%365)-(w*30);
    cout << e << " " << "days" << endl;
    return 0;
}
