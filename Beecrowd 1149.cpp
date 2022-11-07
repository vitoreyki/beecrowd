// BEECROWD 1149 "SOMANDO INTEIROS CONSECUTIVOS"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, soma=0;
	
	cin >> n;
	
	cin >> m;
	
	while(m<=0)
		cin >> m;
		
	for(int i=0; i<m; i++){
		soma+=n;
		n++;
	}
	
	cout << soma << endl;
	
return 0;
	
}
