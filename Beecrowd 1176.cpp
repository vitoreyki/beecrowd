#include <bits/stdc++.h>

#define TF 61

using namespace std;

int main(){
	int i, n, aux;
	long long int vetor[TF];
	
	vetor[0] = 0;
	vetor[1] = 1;
	
	for(i=2; i<TF; i++){
		vetor[i] = vetor[i-1] + vetor[i-2];
	}
	
	cin >> n;
	
	for(i=0; i<n; i++){
		
		cin >> aux;
	
		printf("Fib(%d) = %lld\n", aux, vetor[aux]);
	}
	
return 0;
}
