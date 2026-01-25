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
cout.tie(0);

int x;
cin>>x;
for(int i=1;i<=x;i++){

        for(int n=x;n>i;n--){
            cout<<" ";
        }
    for(int j=1;j<=i*2-1;j++){
        cout<<"*";
    }
    cout<<endl;
}
   return 0;
}
