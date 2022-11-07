#include <stdio.h>

int main()
{
	int dia1,dia2,hora1,hora2,min1,min2,sec1,sec2;
	int dia=0,hora=0,min=0,sec=0;
	char dias[2], caract;
	scanf("%c %d",&dias,&dia1);
	fflush(stdin);
	scanf("%d %c %d %c %d",&hora1,&caract,&min1,&caract,&sec1);
	fflush(stdin);
	scanf("%c %d",&dias,&dia2);
	fflush(stdin);
	scanf("%d %c %d %c %d",&hora2,&caract,&min2,&caract,&sec2);
	fflush(stdin);
	dia = dia2 - dia1;
	hora = hora2 - hora1;
	min = min2 - min1;
	sec = sec2 - sec1;
	if (sec<0)
	{
		sec+=60;
		min--;
	}
	if (min<0)
	{
		min+=60;
		hora--;
	}
	if(hora<0)
	{
		hora+=24;
		dia-=1;
	}
	printf("%d dia(s)",dia);
	printf("%d hora(s)",hora);
	printf("%d minuto(s)",min);
	printf("%d segundo(s)",sec);
return 0;
}
