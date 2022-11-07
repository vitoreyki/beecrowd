// BEECROWD 1177 "PREENCHIMENTO DE VETOR II"

#include <bits/stdc++.h>
#define TF 1000

using namespace std;

int main(){
	
	int v[TF], n, cont=0, aux;
	
	cin >> n;
	
	for(int i=0; i<TF; i++){
		
		
		if(cont!=n){
			cout << "N[" << i << "] = " << i << endl;
			cont++;
			aux = cont;
		}
		else{
			cout << "N[" << i << "] = " << n-aux << endl;
			aux--;
		}
		
		if(aux == 0)
			aux = cont;
			
	}
	
return 0;
	
}
