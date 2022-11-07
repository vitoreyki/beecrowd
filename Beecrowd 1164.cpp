// BEECROWD 1164 "NUMERO PERFEITO"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, num, soma=0;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		
		cin >> num;
		
		for(int j=1; j<num; j++)
			if(num%j == 0)
				soma+=j;
		
		if(soma==num)
			cout << num << " eh perfeito" << endl;	
		else 
			cout << num << " nao eh perfeito" << endl;
			
		soma=0;
	}

return 0;
}
