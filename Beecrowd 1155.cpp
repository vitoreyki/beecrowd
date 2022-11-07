// BEECROWD 1155 "SEQUENCIA S"
// S = 1 + 1/2 + 1/3 + … + 1/100

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	float soma=0;
	
	for(float i=1; i<=100; i++){
		soma += (1/i);
	}
	
	cout <<fixed << setprecision(2) << soma << endl;
	
return 0;
}
