#include <iostream>
#define TF 5
 
using namespace std;
 
int main()
{
	int par[TF],impar[TF],i,j,k,x,y,z,num;
	x=0;
	y=0;
	for(i=0;i<15;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			par[x] = num;
			x++;
			if(x==5)
			{
				x=0;
				for(j=0;j<TF;j++)
				{
					printf("par[%d] = %d\n",j,par[j]);
				}				
			}
		}
		else 
		{
			impar[y] = num;
			y++;
			if(y==5)
			{
				y=0;
				for(j=0;j<TF;j++)
				{
					printf("impar[%d] = %d\n",j,impar[j]);
				}
			}
		}
	}
	for(i=0;i<y;i++)
	{
		printf("impar[%d] = %d\n",i,impar[i]);
	}
	for(i=0;i<x;i++)
	{
		printf("par[%d] = %d\n",i,par[i]);
	}
return 0;
}
