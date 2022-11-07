// BEECROWD 1848

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string str;
	int soma=0, cont=1;
	
	while(cont<=3){
		
		getline(cin,str); //pega literalmente a linha inteira (geralmente usado para nomes completos)
		
		if(str[0] == 'c'){
			cout << soma << endl;
			soma=0;
			cont++;
		}
		
		else{
			
			if(str =="---")
				soma+=0;
			else if(str=="--*")
				soma+=1;
			else if(str=="-*-")
				soma+=2;
			else if(str=="-**")
				soma+=3;
			else if(str=="*--")
				soma+=4;
			else if(str=="*-*")
				soma+=5;
			else if(str=="**-")
				soma+=6;
			else if(str=="***")
				soma+=7;
				
		}	
	}
	
return 0;
}
