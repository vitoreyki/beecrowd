#include <stdio.h>
#include <string.h>
#define TF 12

int main ()
{
	double M[TF][TF],soma=0;
	int i,j=0,k=1;
	char oper[2];
	scanf("%s",&oper);
	for(i=0;i<TF;i++)
	{
		for(j=0;j<TF;j++)
		{
			scanf("%lf",&M[i][j]);
		}
	}
	for(i=11;i>0;i--)
	{
		for(j=k;j<TF;j++)
		{
			soma += M[i][j];
		}
		k++;
	}
	if (oper[0]=='S')
	{
		printf("%.1lf\n",soma);
	}
	else 
	{
		printf("%.1lf\n",soma/66.0);
	}
return 0;
}
