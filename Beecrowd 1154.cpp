// BEECROWD 1154 "IDADES"

#include <bits/stdc++.h>

using namespace std;

int main (){
	
	int n, cont=0;
	double media=0;
	
	cin >> n;
	
	while(n>=0){
		
		media += n;
		cont++;
		
		cin >> n;
	}
	
	cout << fixed << setprecision(2) << media/cont << endl;
	
return 0;
}
