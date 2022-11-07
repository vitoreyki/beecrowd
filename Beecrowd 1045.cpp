#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() 
{
    double a,b,c,aux;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (b>a)
    {
    	aux = a;
    	a = b;
    	b = aux;
    }
    if (c>a)
    {
    	aux = a;
    	a = c;
    	c = aux; 
    }
    if(a>0 && b>0 && c>0)
    {
    if (a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
	}
	else
	{
    if (pow(a,2)==pow(b,2)+pow(c,2))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (pow(a,2)>pow(b,2)+pow(c,2))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (pow(a,2)<pow(b,2)+pow(c,2))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a==b && a==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (a==b && c!=a || a==c && b!=a || b==c && a!=b)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
	}
	}
return 0;
}
