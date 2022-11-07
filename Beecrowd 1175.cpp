// BEECROWD 1175 "TROCA EM VETOR I"

#include <bits/stdc++.h>
#define TF 20

using namespace std;

int main(){
	
	int v[TF];
	for(int i=TF-1; i>=0; i--){
		cin >> v[i];
	}
	
	for(int i=0; i<TF; i++){
		cout << "N[" << i <<  "] = " << v[i] << endl;
	}
	
return 0;
}
