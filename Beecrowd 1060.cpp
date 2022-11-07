#include <iostream>
 
using namespace std;
 
int main() 
{
    float num;
    int i,cont;
    cont=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&num);
        if(num>0)
        {
            cont++;
        }
    }
    printf("%d valores positivos\n",cont);
    return 0;
}
