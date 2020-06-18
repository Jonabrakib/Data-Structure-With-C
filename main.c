#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *ptr;
};
struct node *Head = NULL;
struct node *Tail = NULL;

void create_a_list(){
    struct node *p = (struct node*)malloc(sizeof(struct node));
    struct node *q = (struct node*)malloc(sizeof(struct node));
    struct node *r = (struct node*)malloc(sizeof(struct node));
    struct node *s = (struct node*)malloc(sizeof(struct node));
    struct node *t = (struct node*)malloc(sizeof(struct node));

    p->data = 5;
    q->data = 10;
    r->data = 15;
    s->data = 20;
    t->data = 25;

    Head = p;
    p->ptr = q;
    q->ptr = r;
    r->ptr = s;
    s->ptr = t;
    t->ptr = NULL;
}
void search(int Item)
{

    struct node *link = Head;

    while(link != NULL)
    {
        if(Item == link->data)
        {
            printf("\nItem found.\n");
            break;
        }
        else
        {
            link = link->ptr;
        }
    }
    if(link == NULL)
    {
        printf("\nItem not found.\n");
    }

}

void display(){
    struct node *link = Head;
    while(link != NULL){
        printf("%d, ", link->data);
        link = link->ptr;
    }
}
int count_nodes(){
    struct node *link = Head;
    int count =0;
    while(link != NULL){
        count++;
        link = link->ptr;
    }

    printf("\n The total nodes are: %d \n",count);
}

void delete_a_node(int del_item){
    struct node *LOC = Head;
    struct node *LOCP = NULL;
    while(LOC!= NULL){
        if(LOC->data == del_item)
            break;
        else {
                LOCP = LOC;
                LOC = LOC->ptr;
        }
    }
    if(LOCP == NULL){
        Head = LOC->ptr;
    }else{
        if(LOC!=NULL){
            LOCP->ptr = LOC->ptr;
        }else printf("\nItem not found.\n");
    }
}

int main()
{   int i,item;
    create_a_list();
    display();
    count_nodes();
    display();
    return 0;
}






