#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct node
{
    int data;
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

    a->data=5;
    b->data=10;
    c->data=15;

    Head=a;
    a->ptr=b;
    b->ptr=c;
    c->ptr=NULL;
}
void display()
{
    Node *link=Head;
    while(link !=NULL){
        printf("%d,",link->data);
        link=link->ptr;
    }
}
void search(int item)
{
    Node *link=Head;
    while(link!=NULL){
        if(item==link->data){
            printf("Item found\n");
            break;
        }
        else
            link=link->ptr;
    }
    if(link==NULL){
        printf("Item Not Found\n");
    }

}
void count_nodes()
{
    int count=0;
    Node *link=Head;
    while(link !=NULL){
        count++;
        link=link->ptr;
    }
    printf("Total Nodes= %d\n",count);
}

void insertion(bool add_beg,int item,int val){
    Node *link=Head;
    if(add_beg==false){
        while(link!=NULL){
                if(link->data==item){
                    break;
                }
                else
                    link=link->ptr;

        }
        if(link==NULL){
            printf("Item not found\n");
        }
        else{
            Node *new=(Node*)malloc(sizeof(Node));
            new->data=val;
            new->ptr=link->ptr;
            link->ptr=new;
        }

    }
    else
    {
        Node *new=(Node*)malloc(sizeof(Node));
        new->data=val;
        new->ptr=Head;
        Head=new;
    }
}
void delete_a_node(int del_item)
{
  Node *LOC=Head;
  Node *LOCP=NULL;
  while(LOC!=NULL){
    if(LOC==del_item){
        break;
    }
    else{
        LOCP=LOC;
        LOC=LOC->ptr;
    }
  }
  if(LOCP==NULL){
    Head=LOC;
  }
  else{
    if(LOC!=NULL){
        LOCP->ptr=LOC->ptr;
    }else
    printf("Item not found\n");
  }


}


int main()
{
    int search_item,a,b,c;
    create_a_list();
    display();
    printf("\nEnter the Item you want to search: \n");
    scanf("%d",&search_item);
    search(search_item);
    count_nodes();
    bool add_beg;
    printf("Press 1 to insert in first or press 0 to insert in middle :\n");
    scanf("%d",&add_beg);
    if(add_beg==0){
        printf("Enter the value where you want to insert:\n");
        scanf("%d",&a);
    }
    printf("Enter the node value:\n");
    scanf("%d",&b);
    insertion(add_beg,a,b);
    display();
    printf("Enter the value you want to delete: \n");
    scanf("%d",&c);
    delete_a_node(c);
    display();


    return 0;
}
