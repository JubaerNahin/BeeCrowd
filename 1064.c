#include <stdio.h>
int main()
{
    float count=0,arr[6],total=0,avg;
    for(int i=0;i<6;i++){
      scanf("%f",&arr[i]);
      if(arr[i]>0){
        count++;
        total=total+arr[i];
      }

    }
    avg=total/count;
    printf("%.f valores positivos\n%.1f\n",count,avg);
    return 0;
}
