#include <stdio.h>
int main()
{
   float arr[6];
   int sum=0;
   for(int i=0;i<6;i++){
     scanf("%f",&arr[i]);
     if(arr[i]>0){
       sum+=1;
     }
   }
   printf("%d valores positivos\n",sum);
     
   return 0;
}