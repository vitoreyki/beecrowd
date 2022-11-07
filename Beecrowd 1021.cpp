#include <iostream>
 
using namespace std;
 
int main() {
 
    float valor;
    int cem, cinq, vinte, dez, cinco, dois, um, real, cent;
    int rest_cem, rest_cinq, rest_vinte, rest_dez, rest_cinco, rest_dois, rest_um;
    int cinq_cent, vinte_cent, dez_cent, cinco_cent, um_cent;
    int rest_ccent, rest_vcent, rest_dcent, rest_cicent, rest_ucent;
    scanf("%f",&valor); valor+=0.001;
    real = (int)valor;
    cent = (valor-real)*100;
    cem = real/100;
    rest_cem = real%100;
    cinq = rest_cem/50;
    rest_cinq = rest_cem%50;
    vinte = rest_cinq/20;
    rest_vinte = rest_cinq%20;
    dez = rest_vinte/10;
    rest_dez = rest_vinte%10;
    cinco = rest_dez/5;
    rest_cinco = rest_dez%5;
    dois = rest_cinco/2;
    rest_dois = rest_cinco%2;
    um = rest_dois/1;
    cinq_cent = cent/50;;
    rest_ccent = cent%50;
    vinte_cent = rest_ccent/25;
    rest_vcent = rest_ccent%25;
    dez_cent = rest_vcent/10;
    rest_dcent = rest_vcent%10;
    cinco_cent = rest_dcent/5;
    rest_cicent = rest_dcent%5;
    um_cent = rest_cicent/1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",cem);
    printf("%d nota(s) de R$ 50.00\n",cinq);
    printf("%d nota(s) de R$ 20.00\n",vinte);
    printf("%d nota(s) de R$ 10.00\n",dez);
    printf("%d nota(s) de R$ 5.00\n",cinco);
    printf("%d nota(s) de R$ 2.00\n",dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",um);
    printf("%d moeda(s) de R$ 0.50\n",cinq_cent);
    printf("%d moeda(s) de R$ 0.25\n",vinte_cent);
    printf("%d moeda(s) de R$ 0.10\n",dez_cent);
    printf("%d moeda(s) de R$ 0.05\n",cinco_cent);
    printf("%d moeda(s) de R$ 0.01\n",um_cent);
return 0;
}
