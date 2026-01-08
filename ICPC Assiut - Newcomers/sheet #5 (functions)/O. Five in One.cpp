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

int isprime( int a[],int t){
int counter=0;
for(int i=0;i<t;i++){
int x=a[i];
if(x<=1){
    continue;
}
bool prime=true;
for(int j=2;j<=x/2;j++){
    if(x%j==0){
        prime=false;
        break;
    }
}
if(prime){
    counter++;
}
}
return counter;
}

int palindrome(int a[],int t){
int counter=0;
for(int i=0;i<t;i++){
    int x=a[i];
    int y=x;
    int r=0;
    while (y>0){
        r=r*10+y%10;
        y/=10;
    }
    if(r==x){
        counter++;
    }
   }
   return counter;
}

int GCD(int a[],int t){
int s = a[0];
    int div = 0;

    for(int i = 0; i < t; i++){
        int counter = 0;

        for(int j = 1; j <= a[i]; j++){
            if(a[i] % j == 0) counter++;
        }

        if(counter > div || (counter == div && a[i] > s)){
            div = counter;
            s = a[i];
        }
    }
    return s;
}

/*=========================================================== MAIN =======================================================*/

int main(){
    fast();

int t;
cin>>t;
int a[t];
for(int i=0;i<t;i++){
    cin>>a[i];
}
cout<<"The maximum number : "<< max1(a,t) <<endl;
cout<<"The minimum number : "<< min1(a,t) <<endl;
cout<<"The number of prime numbers : "<< isprime(a,t) <<endl;
cout<<"The number of palindrome numbers : "<< palindrome(a,t) <<endl;
cout<<"The number that has the maximum number of divisors : "<< GCD(a,t) <<endl;

    return 0;
}
