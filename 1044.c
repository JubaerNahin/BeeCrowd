#include <stdio.h>
int main()
{
    int A,B,arr[2],temp;
    scanf("%d%d",&A,&B);
    arr[0]=A;
    arr[1]=B;
    
    for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
        if(arr[i]<arr[j]){
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
    }
    if(arr[1]%arr[0]==0){
      printf("Sao Multiplos\n");
    }
    else{
      printf("Nao sao Multiplos\n");
    }
    return 0;
}