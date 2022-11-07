// BEECROWD 1118

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, op=1, cont=0;
	double m, soma=0;
	
	while(op!=2){
		
		while(cont!=2){	
		
			cin >> m;
			if(m>=0 && m<=10){
				soma+=m;
				cont++;
			}
			else{
				cout << "nota invalida" << endl;
			}	
			
		}
		
		cout << fixed << setprecision(2) << "media = " << soma/cont << endl;
		
		while(cont==2 && op!=2){
			
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> op;
			
			if(op==1){
				cont=0;
				soma=0;
			}
				
		}
	}
	
return 0;
}
