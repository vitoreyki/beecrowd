#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, cont, fat[] = {40320, 5040, 720, 120, 24, 6, 2, 1};
	
	cin >> n;
	
	cont = 0;
	
	for (int i=0; i<8; i++){
		cont += n/fat[i]; //divide e calcula o coeficiente da divisao;
		n = n % fat[i];	//diminui o numero conforme o resto;
	}
	
	cout << cont << endl;
	
	return 0;
	
}
