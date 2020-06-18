#include<stdio.h>
void print_element()
{
    char array[5][10]={"A","B","C","D","E"};
    int i;
    for(i=0;i<5;i++){
        printf("%s,",array[i]);
    }

}
int main()
{
    print_element();
    return 0;
}
