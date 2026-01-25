#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include<iomanip>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0
  
int n;
cin>>n;
int t=1;
for(int i=1;i<=n;i++){
cout<<t<<" "<<t+1<<" "<<t+2<<" PUM\n";
t+=4;
}
   return 0;
}
