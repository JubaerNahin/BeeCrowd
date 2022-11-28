#include <stdio.h>
int main()
{
    int a,b;
    float c,res;
    scanf("%d %d %f",&a,&b,&c);
    res = b*c;
    scanf("%d %d %f",&a,&b,&c);
    res += b * c;
    printf("VALOR A PAGAR: R$ %.2f\n",res);
    return 0;
}