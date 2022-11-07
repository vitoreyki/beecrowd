// BEECROWD 1101

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int m, n, soma=0;
	
	cin >> m >> n;
	
	while(m>0 && n>0){
		
		if(m>n){
			for(int i=n; i<=m; i++){
				cout << i << " ";
				soma+=i;
			}
			cout << "Sum=" << soma << endl;
		}
		else{
			for(int i=m; i<=n; i++){
				cout << i << " ";
				soma+=i;
			}
			cout << "Sum=" << soma << endl;
		}
		cin >> m >> n;
		soma=0;
	}

return 0;
}


