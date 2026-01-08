#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
/*=========================================================== FUNCTION ==================================================*/
void fast(){
  
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
  
}

ll counter(ll x,ll y){
  
ll r=1;
for(int i =0;i<y;i++){
    r*=x;
}
  
return r;
}

ll sumtion(ll x,ll y){
  
ll s=counter(x,0)-1;
for(int i=2;i<=y;i+=2){
s+=counter(x,i);
}
  
return s;
}
/*===========================================================MAIN ==================================================*/
int main(){
    fast();
  
ll x,y;
cin>>x>>y;
cout<<sumtion(x,y);
  
    return 0;
}
