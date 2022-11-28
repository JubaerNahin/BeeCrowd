#include <stdio.h>
int main()
{
   float x,y,z,k,l;
   scanf("%f",&x);
   if(x<=2000){
     printf("Isento\n");
   }
   else if(x>2000 && x<=3000){
     y=x-2000;
     z=y*0.08;
     printf("R$ %.2f\n",z);
   }
   else if(x>3000 && x<=4500){
     y=x-3000;
     k=1000*0.08;
     z=(y*0.18)+k;
     printf("R$ %.2f\n",z);
   }
   else if(x>4500){
     y=x-4500;
     k=1000*0.08;
     z=1500*0.18;
     l=(y*0.28)+k+z;
     printf("R$ %.2f\n",l);
   }
   return 0;
}