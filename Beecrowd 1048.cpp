#include <iostream>
 
using namespace std;
 
int main() 
{
    double salario;
    scanf("%lf",&salario);
    if (salario>=0 && salario<=400.00)
    {
        printf("Novo salario: %.2lf\n",salario*1.15);
        printf("Reajuste ganho: %.2lf\n",salario*0.15);
        printf("Em percentual: 15 %%\n");
    }
    else if (salario>=400.01 && salario<=800.00)
    {
        printf("Novo salario: %.2lf\n",salario*1.12);
        printf("Reajuste ganho: %.2lf\n",salario*0.12);
        printf("Em percentual: 12 %%\n");
    }
    else if (salario>=800.01 && salario<=1200.00)
    {
        printf("Novo salario: %.2lf\n",salario*1.1);
        printf("Reajuste ganho: %.2lf\n",salario*0.1);
        printf("Em percentual: 10 %%\n");
    }
    else if (salario>=1200.01 && salario<=2000.00)
    {
        printf("Novo salario: %.2lf\n",salario*1.07);
        printf("Reajuste ganho: %.2lf\n",salario*0.07);
        printf("Em percentual: 7 %%\n");
    }
    else if (salario>2000.00)
    {
        printf("Novo salario: %.2lf\n",salario*1.04);
        printf("Reajuste ganho: %.2lf\n",salario*0.04);
        printf("Em percentual: 4 %%\n");
    }
return 0;
}
