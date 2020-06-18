#include<stdio.h>
int main ()
{
    char name[15];
    int n;
    scanf("%d", &n);
    if(n == 1){
     printf("Enter name of the animal:\n");
    gets(name);
    printf("%s",name);
    printf("Complete.\n");
    }
    else
        exit(0);
    return 0;
}
