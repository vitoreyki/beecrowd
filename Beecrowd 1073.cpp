#include <iostream>
#include <math.h> 
using namespace std;
 
int main() 
{
    int n,i,square;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        	square = pow(i,2);
            printf("%d^2 = %d\n",i,square);
        }
    }
return 0;
}
