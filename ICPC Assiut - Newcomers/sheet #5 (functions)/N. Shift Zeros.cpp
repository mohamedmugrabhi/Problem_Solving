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

void shift(int a[],int n){
int r=0;
for(int i=0;i<n;i++){
    if(a[i]!=0){
        a[r]=a[i];
        r++;
    }
}
  
while(r<n){
    a[r]=0;
    r++;
}

}

/*=========================================================== MAIN ==================================================*/

int main(){
    fast();

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    shift(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
