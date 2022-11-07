// BEECROWD 1150 "ULTRAPASSANDO O Z"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, m, soma=0, cont=1;
	
	cin >> n;
	
	cin >> m;
	
	while(n>=m){
		cin >> m;
	}
	
	soma=n;
	
	while(soma <= m){
		n++;
		soma += n;
		cont++;
	}
	
	cout << cont << endl;
	
}
