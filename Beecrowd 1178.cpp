// BEECROWD 1178 "PREENCHIMENTO DE VETOR III"

#include <bits/stdc++.h>
#define TF 100

using namespace std;

int main(){
	
	int v[TF];
	double n;
	
	cin >> n;
	
	
	for(int i=0; i<TF; i++){
		printf("N[%d] = %.4lf\n", i, n);
		n /= 2;
	}
	
return 0;

}
