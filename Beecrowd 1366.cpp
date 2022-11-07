// BEECROWD 1366

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, a, b, div, cont=0;;
	
	cin >> n;
	
	while(n){
		for(int i=0; i<n; i++){
			cin >> a >> b;
			div = b/2;
			cont += div;
		}
		cout << cont/2 << endl;
		
		cont=0;
		
		cin >> n;
	}

return 0;
}
