#include <iostream>  
      #include <string>
          #include <cmath>
              #include <algorithm>
                  #include<iomanip>

void fast(){
  ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

using namespace std;
int main() {
fast();
  
	int a, b;
	cin >> a >> b;
  
	bool l = false;
  
	for (int i = a; i <= b; i++) {
		int n = i;
    
		bool lucky = true;
    
		while (n > 0) {
			int d = n % 10;
      
			if(d!=4&&d!=7)
			{
				 lucky = false;
				break;
			}
      
			n /= 10;
      
		}
    
		if (lucky) {
			cout << i << " ";
			l = true;
		}
    
	}
  
	if (!l)
		cout << -1;
  
	return 0;
}
