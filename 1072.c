#include<stdio.h>
int main()
{
    int n,i,in=0,out=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>9 && arr[i]<21){
            in++;
        }
        else{
            out++;
        }
    }
    printf("%d in\n%d out\n",in,out);

}