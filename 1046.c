#include<stdio.h>
int main()
{
  int x,y,z,a;
  scanf("%d%d",&x,&y);
  if(y<24 && y>x){
    z=y-x;
    printf("O JOGO DUROU %d HORA(S)\n",z);
  }
  else{
    a=(24-x)+y;
    printf("O JOGO DUROU %d HORA(S)\n",a);
  }
  return 0;
}