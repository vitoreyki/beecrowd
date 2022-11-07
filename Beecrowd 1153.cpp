#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, cont=1;
    
    cin >> n;
    
    for(int i=n; i>0; i--)
        cont *= i;

    cout << cont << endl;
    
return 0;
}
