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

double average(double a[],int t){
 double sum=0;
 for(int i=0;i<t;i++){
    sum+=a[i];
 }
return sum/t;
}

/*=========================================================== MAIN ==================================================*/

int main(){
    fast();
    
int t;
cin>>t;
double a[t];
for(int i=0;i<t;i++){
    cin>>a[i];
}
double avg=average(a,t);
cout << fixed << setprecision(7) << avg << endl;
  
    return 0;
}
