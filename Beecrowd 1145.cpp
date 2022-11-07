// BEECROWD 1145 "SEQUENCIA LOGICA 2"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, cont=0;
	
	cin >> n >> m;
	
	for(int i=1; i<=m; i++){
		
		if(cont<n){
			cout << i;
			if(cont!=n-1){
				cout << " ";
			}
			cont++;
		}
		else{
			cout << endl;
			cout << i;
			if(cont!=n-1){
				cout << " ";
			}
			cont=1;
		}
	}
	cout << endl;
	
return 0;	
}
