// BEECROWD 1173 "PREENCHIMENTO DE VETOR I"

#include <bits/stdc++.h>
#define TF 10

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	for(int i=0; i<TF; i++){
		cout << "N[" << i << "] = " << n << endl;
		n*=2;
	}
	
return 0;
}
