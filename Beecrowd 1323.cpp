// BEECROWD 1323 FEYNMAN

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, cont=0;
	
	cin >> n;
	
	while(n){
		
		for(int i=1; i<=n; i++){
			cont += i*i;
		}
		
		cout << cont << endl;
		cont=0;
		cin >> n;
	}
	
return 0;

}




