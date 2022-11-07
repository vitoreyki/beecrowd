// BEECROWD 1097

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int num=5;
	
	for(int i=1; i<10; i+=2){
		printf("I=%d J=%d\n",i,num+2);
		printf("I=%d J=%d\n",i,num+1);
		printf("I=%d J=%d\n",i,num);
		num+=2;
	}
	
return 0;
}
