// BEECROWD 1133 "RESTO DA DIVISAO"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m;
	
	cin >> n >> m;
	
	if(n>m){
		for(int i=m+1; i<n; i++){
			if(i%5==2 || i%5==3){
				cout << i << endl;
			}
		}
	}
	else{
		for(int i=n+1; i<m; i++){
			if(i%5==2 || i%5==3){
				cout << i << endl;
			}
		}
	}
	
return 0;
}
