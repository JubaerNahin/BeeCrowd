#include <stdio.h>
 
int main() {
 
    char name;
    
    double sold,out,salary;
    scanf("%s%lf%lf",&name,&salary,&sold);
    out = sold*.15;
    
    printf("TOTAL = R$ %.2lf\n",(out+salary));
 
    return 0;
}