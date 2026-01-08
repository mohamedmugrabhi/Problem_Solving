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

void newarray(int a[],int b[],int c[],int n){
for(int i=0;i<n;i++){
    c[i]=b[i] ;
}
for(int i=0;i<n;i++){
    c[i+n]=a[i] ;
}

}

/*=========================================================== MAIN ==================================================*/

int main(){
    fast();
int n;
cin>>n;
int a[n],b[n],c[2*n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}

newarray(a,b,c,n);

for(int i=0;i<2*n;i++){
    cout<<c[i]<<" ";
}
cout <<endl;
  
    return 0;
}
