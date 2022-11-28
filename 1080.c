#include<stdio.h>
int main()
{
    int i,pos,arr[100],highest=0;
    for(i=1;i<=100;i++){
    
    scanf("%d",&arr[i]);
    if(arr[i]>highest){
      highest=arr[i];
      pos=i;
    }
  }
  printf("%d\n%d\n",highest,pos);

}
