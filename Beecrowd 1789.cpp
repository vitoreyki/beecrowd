// BEECROWD 1789 "A CORRIDA DE LESMAS"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, vel, maior=0;
	
	while(cin >> n){
		for(int i=0; i<n; i++){
			
			cin >> vel;
			
			if(vel>maior){
				maior = vel;
			}
			
		}
		
		if(maior<10)
			cout << 1 << endl;
		else if(maior>=10 && maior<20)
			cout << 2 << endl;
		else
			cout << 3 << endl;
			
		maior=0;
	}
	
return 0;
}
