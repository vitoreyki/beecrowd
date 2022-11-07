// BEECROWD 3342 

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, p, b;
	
	cin >> n;
	
	n*=n;
	
	p = n/2;
	
	b = n-p;
	
	cout << b << " casas brancas e " << p << " casas pretas" << endl;
}
