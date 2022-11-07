// BEECROWD 1828

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char sheldon[10], raj[10];
	int n;
	
	cin >> n;
	
	for(int i=1; i<n+1; i++){
		cin >> sheldon >> raj;
		
		// CASOS EM QUE SHELDON GANHA
		if((strcmp(sheldon,"tesoura")==0 && strcmp(raj,"papel")==0) || (strcmp(sheldon,"tesoura")==0 && strcmp(raj,"lagarto")==0))
			cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(strcmp(sheldon,"papel")==0 && strcmp(raj,"pedra")==0 || (strcmp(sheldon,"papel")==0 && strcmp(raj,"Spock")==0))
			cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(strcmp(sheldon,"pedra")==0 && strcmp(raj,"tesoura")==0 || (strcmp(sheldon,"pedra")==0 && strcmp(raj,"lagarto")==0))
			cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(strcmp(sheldon,"lagarto")==0 && strcmp(raj,"papel")==0 || (strcmp(sheldon,"lagarto")==0 && strcmp(raj,"Spock")==0))
			cout << "Caso #" << i << ": Bazinga!" << endl;
		else if(strcmp(sheldon,"Spock")==0 && strcmp(raj,"tesoura")==0 || (strcmp(sheldon,"Spock")==0 && strcmp(raj,"pedra")==0))
			cout << "Caso #" << i << ": Bazinga!" << endl;
			
		//	CASOS EM QUE RAJ GANHA
		else if(strcmp(raj,"tesoura")==0 && strcmp(sheldon,"papel")==0 || (strcmp(raj,"tesoura")==0 && strcmp(sheldon,"lagarto")==0))
			cout << "Caso #" << i << ": Raj trapaceou!" << endl;
		else if(strcmp(raj,"papel")==0 && strcmp(sheldon,"pedra")==0 || (strcmp(raj,"papel")==0 && strcmp(sheldon,"Spock")==0))
			cout << "Caso #" << i << ": Raj trapaceou!" << endl;
		else if(strcmp(raj,"pedra")==0 && strcmp(sheldon,"tesoura")==0 || (strcmp(raj,"pedra")==0 && strcmp(sheldon,"lagarto")==0))
			cout << "Caso #" << i << ": Raj trapaceou!" << endl;
		else if(strcmp(raj,"lagarto")==0 && strcmp(sheldon,"papel")==0 || (strcmp(raj,"lagarto")==0 && strcmp(sheldon,"Spock")==0))
			cout << "Caso #" << i << ": Raj trapaceou!" << endl;
		else if(strcmp(raj,"Spock")==0 && strcmp(sheldon,"tesoura")==0 || (strcmp(raj,"Spock")==0 && strcmp(sheldon,"pedra")==0))
			cout << "Caso #" << i << ": Raj trapaceou!" << endl;
			
		// CASOS DE EMPATE
		else if(strcmp(raj,"tesoura")==0 && strcmp(sheldon,"tesoura")==0)
			cout << "Caso #" << i << ": De novo!" << endl;
		else if(strcmp(raj,"papel")==0 && strcmp(sheldon,"papel")==0)
			cout << "Caso #" << i << ": De novo!" << endl;
		else if(strcmp(raj,"pedra")==0 && strcmp(sheldon,"pedra")==0)
			cout << "Caso #" << i << ": De novo!" << endl;
		else if(strcmp(raj,"lagarto")==0 && strcmp(sheldon,"lagarto")==0)
			cout << "Caso #" << i << ": De novo!" << endl;
		else if(strcmp(raj,"Spock")==0 && strcmp(sheldon,"Spock")==0)
			cout << "Caso #" << i << ": De novo!" << endl;
		
	}
	
return 0;
}
