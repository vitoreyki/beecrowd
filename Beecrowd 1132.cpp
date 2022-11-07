// BEECROWD 1132

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, soma=0;
	
	cin >> n >> m;
	
	if(n>m){
		for(int i=m; i<=n; i++){
			if(i%13!=0){
				soma += i;
			}
		}
	}
	else{
		for(int i=n; i<=m; i++){
			if(i%13!=0){
				soma += i;
			}
		}
	}
	
	cout << soma << endl;
	
return 0;
}
