 #include<stdio.h>
 #include<string.h>
 int main()
 {
    char new_ch[20];
    char ch[10];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%s",&ch[i]);
    }
    scanf("%s",&new_ch[20]);

     if (strcmp(ch,new_ch) == 0)
      printf("Item found\n");
   else
      printf("Item not found\n");

    return 0;
 }
