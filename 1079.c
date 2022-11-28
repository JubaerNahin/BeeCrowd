#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    float arr[3],avg;
    for(i=0;i<n;i++){
       for(j=0;j<3;j++){
        scanf("%f",&arr[j]);
       }
       avg=(((arr[0]*2)+(arr[1]*3)+(arr[2]*5))/(2+3+5));
       printf("%.1f\n",avg);
    }

}