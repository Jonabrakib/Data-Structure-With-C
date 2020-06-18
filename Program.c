#include<stdio.h>
#include<string.h>
struct friends
{
    char name[20];
    int id;
    char uni;
    char dep;
};

void func(record){
    printf("%s %s %s %s",record.name,record.id,record.uni,record.dep);
}
int main()
{

}
