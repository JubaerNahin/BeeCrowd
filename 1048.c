#include <stdio.h>
int main()
{
    float x,y,z;
    scanf("%f",&x);
    if(x>=0 && x<=400){
      y=x*0.15;
      z=x+y;
      printf("Novo salario: %.2f\n",z);
      printf("Reajuste ganho: %.2f\n",y);
      printf("Em percentual: 15 %\n");
    }
    else if(x>=400.01 && x<=800){
      y=x*0.12;
      z=x+y;
      printf("Novo salario: %.2f\n",z);
      printf("Reajuste ganho: %.2f\n",y);
      printf("Em percentual: 12 %\n");
    }
    else if(x>=800.01 && x<=1200){
      y=x*0.10;
      z=x+y;
      printf("Novo salario: %.2f\n",z);
      printf("Reajuste ganho: %.2f\n",y);
      printf("Em percentual: 10 %\n");
    }
    else if(x>=1200.01 && x<=2000){
      y=x*0.07;
      z=x+y;
      printf("Novo salario: %.2f\n",z);
      printf("Reajuste ganho: %.2f\n",y);
      printf("Em percentual: 7 %\n");
    }
    else{
      y=x*0.04;
      z=x+y;
      printf("Novo salario: %.2f\n",z);
      printf("Reajuste ganho: %.2f\n",y);
      printf("Em percentual: 4 %\n");
    }
    
    return 0;
    
}