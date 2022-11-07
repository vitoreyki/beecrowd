// BEECROWD 1865 "MJOLNIR"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, pot;
	char nome[30];
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		
		cin >> nome >> pot;
		if (strcmp(nome,"Thor")==0)
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}
	
return 0;
}
