#include <stdio.h>
int main()
{
    float a,b,c,arr[3],temp,perimeter,area;
    scanf("%f%f%f",&a,&b,&c);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        if(arr[i]<arr[j]){
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
    }
    if(arr[0]+arr[1]>arr[2]){
      perimeter=arr[0]+arr[1]+arr[2];
      printf("Perimetro = %.1f\n",perimeter);
    }
    else{
      area=((a+b)/2)*c;
      printf("Area = %.1f\n",area);
    }
}