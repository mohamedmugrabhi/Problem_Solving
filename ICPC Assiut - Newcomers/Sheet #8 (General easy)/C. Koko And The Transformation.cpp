#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    fast();

 int n,m;
 cin>>n>>m;
  
 int a[n];
 int b[m];
  
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 for(int i=0;i<m;i++){
    cin>>b[i];
 }
  ll sum1=0;
  for(int i=0;i<n;i++){
    sum1+=a[i];
 }
 ll sum =0;
 for(int i=0;i<m;i++){
    sum+=b[i];
 }
   if (sum==sum1){
    cout<<"Yes"<<endl;
   }
   else{
     cout<<"No"<<endl;
   }

    return 0;
}
