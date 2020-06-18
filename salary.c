#include<stdio.h>
int main(){

    char NAME[20];
    float FIXED_SALARY,SOLD,PERCENTAGE,TOTAL;
    scanf("%s",&NAME);
    scanf("%f",&FIXED_SALARY);
    scanf("%f",&SOLD);
    PERCENTAGE=(15*SOLD)/100;
    TOTAL=FIXED_SALARY+PERCENTAGE;
    printf("TOTAL = R$ %0.2f\n",TOTAL);

    return 0;
}
