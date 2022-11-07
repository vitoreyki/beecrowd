// BEECROWD 1113 "CRESCENTE E DECRESCENTE"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m;
	
	cin >> n >> m;
	
	while(n!=m){
		if(n>m){
			cout << "Decrescente" << endl;
		}
		else{
			cout << "Crescente" << endl;
		}
		
		cin >> n >> m;
	}

return 0;
}
