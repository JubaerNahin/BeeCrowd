#include <stdio.h>
int main()
{
  
  int N;
  int note100,note50,note20,note10,note5,note2,note1;
  note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;
  scanf("%d",&N);
  printf("%d\n",N);
  note100=N/100;
  N=N%100;
  note50=N/50;
  N=N%50;
  note20=N/20;
  N=N%20;
  note10=N/10;
  N=N%10;
  note5=N/5;
  N=N%5;
  note2=N/2;
  note1=N%2;
  printf("%d nota(s) de R$ 100,00\n",note100);
  printf("%d nota(s) de R$ 50,00\n",note50);
  printf("%d nota(s) de R$ 20,00\n",note20);
  printf("%d nota(s) de R$ 10,00\n",note10);
  printf("%d nota(s) de R$ 5,00\n",note5);
  printf("%d nota(s) de R$ 2,00\n",note2);
  printf("%d nota(s) de R$ 1,00\n",note1);
  
  return 0;
}