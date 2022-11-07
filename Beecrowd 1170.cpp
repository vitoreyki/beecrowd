// BEECROWD 1170

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, cont=0;
	double comida;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		
		cin >> comida;
		while(comida>1){
			comida = comida/2;
			cont++;
		}
		
		cout << cont << " dias" << endl;
		cont=0;
	}
	
return 0;
}
