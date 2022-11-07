// BEECROWD 1080

#include <bits/stdc++.h>
#define TF 5

using namespace std;

int main(){
	
	int vet[TF], maior=0, pos;
	
	for(int i=0; i<TF; i++){
		
		cin >> vet[i];
		
		if(vet[i]>maior){
			maior = vet[i];
			pos = i+1;
		}
	}
	
	cout << maior << endl;
	cout << pos << endl;
	
return 0;
}
