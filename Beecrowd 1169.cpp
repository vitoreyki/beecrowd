// BEECROWD 1169

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long int n, m, kg;
	
	cin >> n;
	
	for(int i=0; i<n && n<=100; i++){
		
		cin >> m;
		
		if(m<=64){
			
			kg = (pow(2,m)/12)/1000;
		
			cout << kg << " kg" << endl;
		}
	}
	
return 0;
}
