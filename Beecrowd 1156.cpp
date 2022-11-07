// BEECROWD 1156 "SEQUENCIA S II"
// S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	float soma = 0;;
	
	for(float i=1, j=1; i<40; i+=2, j*=2){
		
		soma += (i/j);
	}
	
	cout << fixed << setprecision (2) << soma << endl;
	
return 0;
}

