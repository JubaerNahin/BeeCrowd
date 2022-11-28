#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
      if(arr[i]>0 && arr[i]%2==0){
        printf("EVEN POSITIVE\n");
      }
      if(arr[i]>0 && arr[i]%2!=0){
        printf("ODD POSITIVE\n");
      }
      if(arr[i]<0 && arr[i]%2==0){
        printf("EVEN NEGATIVE\n");
      }
       if(arr[i]<0 && arr[i]%2!=0){
        printf("ODD NEGATIVE\n");
      }
      if(arr[i]==0){
        printf("NULL\n");
      }
    }
}