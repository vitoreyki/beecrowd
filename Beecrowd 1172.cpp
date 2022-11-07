#include <iostream>
#define X 10
using namespace std;
 
int main() 
{
    int vet[X],TL=0,i,j,num;
    for(i=0;i<X;i++)
    {
        scanf("%d",&num);
        vet[TL] = num;
        TL++;
    }
    for(i=0;i<X;i++)
    {
        if(vet[i]<=0)
        {
            vet[i] = 1;
            printf("X[%d] = %d\n",i,vet[i]);
        }
        else
            printf("X[%d] = %d\n",i,vet[i]);
	}
return 0;
}

