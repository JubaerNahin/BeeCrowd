#include <stdio.h>
int main()
{
  float A,B,C;
  double R,S,T,U,V;
  scanf("%f %f %f",&A,&B,&C);
  R = (1*A*C)/2;
  printf("TRIANGULO: %.3lf\n",R);
  S = 3.14159*C*C;
  printf("CIRCULO: %.3lf\n",S);
  T = ((A+B)/2)*C;
  printf("TRAPEZIO: %.3lf\n",T);
  U = B*B;
  printf("QUADRADO: %.3lf\n",U);
  V = A*B;
  printf("RETANGULO: %.3lf\n",V);
  
  return 0;
}