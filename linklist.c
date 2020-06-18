#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
    int data1;
    struct node *ptr;
};

typedef struct node Node;
Node *Head=NULL;
Node *Tail=NULL;

create_a_list()
{
    Node *a=(Node*)malloc(sizeof(Node));
    Node *b=(Node*)malloc(sizeof(Node));
    Node *c=(Node*)malloc(sizeof(Node));
    Node *d=(Node*)malloc(sizeof(Node));

    a->data1=5;
    b->data1=10;
    c->data1=15;
    d->data1=20;

    Head=a;
    a->ptr=b;
    b->ptr=c;
    c->ptr=d;
    d->ptr=NULL;
}
void display()
{
    Node *link=Head;
    while(link !=NULL){
        printf("%d,",link->data1);
        link=link->ptr;
    }
}

void count_nodes()
{
    Node *link=Head;
    int count=0;
    while(link!=NULL){
        count++;
        link=link->ptr;
    }
    printf("\nTotal nodes in this list is: %d\n",count);
}
void search(int search_item)
{
    Node *link=Head;
    while(link!=NULL){
        if(link->data1==search_item){
            printf("Item found");
            break;
        }
        else{
            link=link->ptr;
        }
    }
    if(link==NULL){
        printf("Item not found");
    }

}
void insertion(bool add_to_beg,int item,int val1)
{
    Node *link=Head;
    if(add_to_beg==false){
        while(link!=NULL){
                if(link->data1==item){
                    break;
                }
                else{
                    link=link->ptr;
                }

        }
        if(link==NULL){
            printf("Item not found");
        }
       else{
        Node *new=(Node*)malloc(sizeof(Node));
        new->data1=val1;
        new->ptr=link->ptr;
        link->ptr=new;

       }

    }
    else{
        Node *new=(Node*)malloc(sizeof(Node));
        new->data1=val1;
        new->ptr=Head;
        Head=new;
    }

}
void deletetion(int del_item)
{
    Node *LOC=Head;
    Node *LOCP=NULL;
    while(LOC!=NULL){
        if(LOC->data1==del_item)
        {
            break;
        }
        else{
                LOCP=LOC;
            LOC=LOC->ptr;
        }
    }
    if(LOCP==NULL){
        LOC=Head;
    }
    else{
            if(LOC!=NULL){
                LOCP->ptr=LOC->ptr;
            }
        else
            printf("Item not found");
    }
}

int main()
{
    int item,insert_item,a,valu1,del;
    create_a_list();
    display();
    count_nodes();
    printf("Please Enter the search item: \n");
    scanf("%d",&item);
    search(item);
    bool add_to_beg;
    printf("Enter 1 to insert first or insert 0 to insert in middle: \n");
    scanf("%d",&insert_item);
    if(insert_item==0){
        printf("Enter where you want to insert");
        scanf("%d",&a);
    }
    printf("Enter the node values: \n");
    scanf("%d",&valu1);
    insertion(add_to_beg,a,valu1);
    display();
    printf("Enter where you want to delete: \n");
    scanf("%d",&del);
    deletetion(del);
    display();
}
