#include <iostream>
#include <algorithm>
#include <string>
#include<cmath>
using namespace std;
int main() {
	int s;
	cin >> s;
	bool prime = true;
	if (s <= 1) {
		prime = false;
	}
	else {
		for (int i = 2; i <= s / 2;i++) {
			if (s % i == 0) {
				prime = false;
				break;
			}
		}
		if (prime) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}

}
