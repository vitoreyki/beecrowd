// BEECROWD 1858

#include <bits/stdc++.h>
#define TF 100

using namespace std;

int main(){
	
	int n, v[TF], pos=1, menor=20;
	
	cin >> n;
	
	for(int i=1; i<=n; i++){
		
		cin >> v[i];
		
		if(v[i]>=0 && v[i]<=20){
			if(v[i] < menor){
				menor = v[i];
				pos = i;
			}
		}
		
		
	}
	
	cout << pos << endl;

return 0;
}
