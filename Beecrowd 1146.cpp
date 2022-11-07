// BEECROWD 1146 "SEQUENCIAS CRESCENTES"

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	while(n){
		
		for(int i=1; i<=n; i++){
			
			cout << i;
			
			if(i<n)
			    cout << " ";
			
			if(n==i)
				cout << endl; 
		}
		
		cin >> n;
		
	}
	
return 0;
}
