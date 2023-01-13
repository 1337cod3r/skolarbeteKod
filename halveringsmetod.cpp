#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

ull mod = 1000000007;


int main(){

	float x1 = 0.70710678118;
	float x2 = 1.41421356237 ;
	float n;
	float nog;

	cin >> n;
	cout << "Hur många nollors noggrannhet (ange me typ 0.001): ";
	cin >> nog;

	while (n - (fmod(n, nog)) != 0){

		if (n < 0)
			n = n * x2;
		if (n > 0)
			n = n * x1;
		if (n == 0)
			break;
		
	}

	cout << setprecision(1 / nog) << n;

	return 0;
}
