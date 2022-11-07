// BEECROWD 1117

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int cont=0;
	double n, media=0;
	
	while(cont!=2){
		
		cin >> n;
		
		if(n<0 || n>10){
			cout << "nota invalida" << endl;
		}
		else{
			media += n;
			cont++;
		}
		
	}
		
	cout << fixed << setprecision(2) << "media = " << media/2 << endl;
	
return 0;
}
