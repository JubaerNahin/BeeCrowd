#include <stdio.h>
int main()
{
    double A,B,C,arr[3],temp;
    
    for(int i=0;i<3;i++) scanf("%lf", &arr[i]);
    for(int i=0;i<2;i++){
      for(int j=i+1;j<3;j++){
        if(arr[i]<arr[j]){
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
    }
   
    if(arr[0]>=arr[1]+arr[2]){
      printf("NAO FORMA TRIANGULO\n");
    }
    else if(arr[0]*arr[0]==(arr[1]*arr[1])+(arr[2]*arr[2])){
      printf("TRIANGULO RETANGULO\n");
    }
    else if(arr[0]*arr[0]>(arr[1]*arr[1])+(arr[2]*arr[2])){
      printf("TRIANGULO OBTUSANGULO\n");
    }
    else{
      printf("TRIANGULO ACUTANGULO\n");
    }
    if((arr[0]==arr[1]) && (arr[1]==arr[2])){
      printf("TRIANGULO EQUILATERO\n");
    }
    else if(arr[0]==arr[1] || arr[1]==arr[2]){
      printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}