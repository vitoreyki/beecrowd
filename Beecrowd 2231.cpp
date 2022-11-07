#include <stdio.h>
#define size 10000

int main ()
{
	int temp[size],TL,i,j,k,inter,num,maior,menor,soma,temp_media,n=0;	
	scanf("%d%d", &num, &inter);
	while(num!=0 && inter!=0)
	{
		TL=0;
		for(i=0;i<num;i++)
		{
			scanf("%d",&temp[i]);
			TL++;	
		}
		maior = -201;
		menor = 201;
		for(j=inter-1,i=0;j<TL;j++,i++)
		{
			soma = 0;
			k=i;
			while(k<=j)
			{
				soma+=temp[k];
				k++;
			}
			temp_media = soma/inter;
			if(temp_media > maior)
			{
				maior = temp_media;
			}
			if(temp_media < menor)
			{
				menor = temp_media;
			}
		}
		n++;
		printf("Teste %d\n",n);
		printf("%d %d\n",menor,maior);
		scanf("%d%d",&num,&inter);
	}
return 0;
}
