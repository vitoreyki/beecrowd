#include <bits/stdc++.h>

int main(){
	
	int i;
	long long int n1, n2, aux1, aux2;
	
	while(scanf("%lld %lld", &n1, &n2)!=EOF){
		
		aux1 = 1; aux2 = 1;
		
		for(i=n1; i>0; i--){
			aux1 *= i;
		}
		
		for(i=n2; i>0; i--){
			aux2 *= i;
		}
			
		printf("%lld\n", aux1 + aux2);
	}
	
return 0;
}


