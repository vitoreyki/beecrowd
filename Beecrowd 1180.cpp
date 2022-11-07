// BEECROWD 1180 "Menor e posicao"

#include <bits/stdc++.h>
#define TF 1000

using namespace std;

int main(){
	
	int n, v[TF], menor=0, cont=0, pos=0;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		
		cin >> v[i];
		
		if(cont==0){
			menor = v[i];
			cont++;
		}
			
		if(v[i] < menor){
			menor = v[i];
			pos = i;
		}
		else if(v[i] == menor)
			pos = 0;
	}
	
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << pos << endl;

return 0;
}

