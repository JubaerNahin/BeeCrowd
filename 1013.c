#include<stdio.h>
int main()
{
  
  int A,B,C,R;
  scanf("%d%d%d",&A,&B,&C);
  R = (A+B+abs(A-B))/2;
  R = (R+C+abs(R-C))/2;
  printf("%d eh o maior\n",R);
  return 0;
}