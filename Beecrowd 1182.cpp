#include <stdio.h>
#include <string.h>
#define TF 12

int main()
{
	int i,j,k,n;
	char oper[2];
	double M[TF][TF],num,soma=0;
	scanf("%d",&n);
	scanf("%s",&oper);
	for(i=0;i<TF;i++)
	{
		for(j=0;j<TF;j++)
		{
			scanf("%lf",&M[i][j]);
			if (j==n)
				soma += M[i][j];
		}
	}
	if(oper[0] == 'S')
	{
		printf("%.1lf\n",soma);
	}
	else if(oper[0] == 'M')
	{
		printf("%.1lf\n",soma/12.0);
	}
return 0;
}
