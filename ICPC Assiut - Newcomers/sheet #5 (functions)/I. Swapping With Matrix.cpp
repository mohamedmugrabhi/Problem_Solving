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

void swaprows(int a[501][501], int n, int x, int y){
for(int j = 0; j < n; j++){
        swap(a[x][j], a[y][j]);
    }
}

void swapcoulmns(int a[501][501], int n, int x, int y){
for(int i = 0; i < n; i++){
        swap(a[i][x], a[i][y]);
    }
}

/*=========================================================== MAIN ==================================================*/

int main(){
    fast();
    
int n,x,y;
cin>>n>>x>>y;
x--;
y--;
int a[501][501];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}

swaprows(a,n,x,y);
swapcoulmns(a,n,x,y);

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}
