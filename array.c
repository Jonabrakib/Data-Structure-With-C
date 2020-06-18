#include<stdio.h>
void arr(int *x[],int search){
int i;
for(i=0;i<10;i++)
{
    if(x[i]==search)
        printf("%d founded in the array:",search);
    else
        printf("Not found");
}


}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},item;
    scanf("%d",&item);
    arr(&a,item);
    return 0;
}
