#include<stdio.h>
int main()
{
  int a,b,c,d,x,y;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a>c && b<d){
    x=(24-a)+c;
    y=(d-b);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
  }
  else if(a>c && b>d){
    x=(24-a)+c-1;
    y=(60-b)+d;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
  }
  else if(a==c && b==d && a==b || a==c && b==d){
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
  }
  else if(a<c && b<d){
    x=(c-a);
    y=d-b;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
  }
  else if(a<c && b>d){
    x=(c-a)-1;
    y=(60-b)+d;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
  }
  else if(a==c && b>d){
    x=23;
    y=(60-b)+d;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
  }
  else if(a==c && b<d){
    x=0;
    y=(d-b);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
  }
  return 0;
}