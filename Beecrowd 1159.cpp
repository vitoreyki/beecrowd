// BEECROWD 1159 "SOMA DE PARES CONSECUTIVOS"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, soma=0;
	
	cin >> n;
	
	while(n){
		for(int i=n, j=0; j<5; i++){
			if(i%2==0){
				soma+=i;
				j++;
			}
		}
		
		cout << soma << endl;
		
		soma=0;
		
		cin >> n;
	}
	
return 0;
}
