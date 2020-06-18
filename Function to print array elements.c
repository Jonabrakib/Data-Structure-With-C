#include<stdio.h>
void print_element()
{
    char array[5]={'A','B','C','D','E'};
    int i;
    for(i=0;i<5;i++){
        printf("%c,",array[i]);
    }

}
int main()
{
    print_element();
    return 0;
}
