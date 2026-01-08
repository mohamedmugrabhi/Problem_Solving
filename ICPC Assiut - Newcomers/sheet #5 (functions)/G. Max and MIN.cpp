#include <bits/stdc++.h>
using namespace std;
typedef long long ll;typedef bool bb;typedef double dd;
#define endl '\n'
/*=========================================================== FUNCTION ==================================================*/

 void fast(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
}

int max1(int a[],int t){
int max2=a[0];
for(int i=1;i<t;i++){
    if(a[i]>max2){
        max2=a[i];
    }
}
  
  return max2;
}

int min1(int a[],int t){
int min2=a[0];
for(int i=1;i<t;i++){
    if(a[i]<min2){
        min2=a[i];
    }
}
  
return min2;
}
/*=========================================================== MAIN ==================================================*/
int main(){
    fast();

    int t;
cin>>t;
int a[t];
for(int i=0;i<t;i++){
    cin>>a[i];
}
cout<<min1(a,t)<<" "<<max1(a,t);
  
    return 0;
}
