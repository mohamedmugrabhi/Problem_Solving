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

int distinctnumbers( int a[], int n){
    int counter = 1;
if(n == 0) {
 return 0;
}
    sort(a, a + n);
    for(int i = 1; i < n; i++){
        if(a[i] != a[i - 1])
            counter++;
    }
    return counter;
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
cout<<distinctnumbers(a,n)<<endl;
  
    return 0;
}
