// BEECROWD 1158 "SOMA DE IMPARES CONSECUTIVOS III"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, p, soma=0;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		
		cin >> m >> p;
		
		for(int j=m, cont=0; cont<p; j++){
			
			if(j%2!=0){
				soma += j;
				cont++;
			}
				
		}
		
		cout << soma << endl;
		
		soma=0;
	}
	
return 0;
}
