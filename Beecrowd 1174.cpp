#include <iostream>
#define A 100
 
using namespace std;
 
int main() 
{
    float vet[A],num;
    int i,TL=0;
    for(i=0;i<A;i++)
    {
        scanf("%f",&num);
        vet[TL] = num;
        TL++;
    }
    for(i=0;i<A;i++)
    {
        if(vet[i]<=10)
        {
            printf("A[%d] = %.1f\n",i,vet[i]);
        }
    }
return 0;
}
