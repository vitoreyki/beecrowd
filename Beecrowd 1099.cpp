// BEECROWD 1099 "SOMA DE IMPARES CONSECUTIVOS II"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, a, b, cont=0;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		
		cin >> a >> b;
		
		if(a>b){
			for(int j=b+1; j<a; j++){
				if(j%2!=0){
					cont+=j;
				}
			}
		}
		else{
			for(int j=a+1; j<b; j++){
				if(j%2!=0){
					cont+=j;
				}
			}
		}
		
		cout << cont << endl;
		cont=0;
	}
	
return 0;

}
