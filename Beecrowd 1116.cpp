// BEECROWD 1116

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	float  n1, n2;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		
		cin >> n1 >> n2;
		if(n2 == 0)
			cout << "divisao impossivel" << endl;
		else{		
			cout << fixed << setprecision(1) << n1/n2 << endl;
		}
	}

return 0;
}
