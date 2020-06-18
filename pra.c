
#include<stdio.h>
#include<string.h>
int main ()
{
    char name1[20];
    char name2[20];
    int n;
    scanf("%d", &n);
    if(n==1){
    printf("Enter name of the animal:\n");
    gets(name1);
    strcpy(name2,name1);
    printf("%s",name2);
     printf("Complete.\n");
    }
    else
        exit(0);
    return 0;
}
