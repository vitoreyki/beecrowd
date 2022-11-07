// BEECROWD 1079

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	float n1, n2, n3, media;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> n1 >> n2 >> n3;
		
		media = ((n1*2)+(n2*3)+(n3*5))/10;
		
		cout << fixed << setprecision(1) << media << endl;
	}

return 0;
}
