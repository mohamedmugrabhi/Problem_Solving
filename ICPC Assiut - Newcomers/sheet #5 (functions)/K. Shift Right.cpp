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

void shift( int a[],int n,int x){
x=x%n;
int r[n];
for(int i=0;i<n;i++){
  r[(i+x)%n]=a[i];
}
for(int i = 0; i < n; i++){
        a[i] = r[i];
}
}

/*=========================================================== MAIN ======================================================*/

int main(){
    fast();
  
int n,x;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
shift(a,n,x);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
  
    return 0;
}
