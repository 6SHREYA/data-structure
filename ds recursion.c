#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void insert(struct node**,int);
int main()
{
    struct node *start;
    start=NULL;
    int x=1,value;
    printf("insertion at the last in the ll using recursion \n");
    while(x==1)
    {
        printf("enter the value to be inserted \n");
        scanf("%d",&value);
        insert(&start,value);
        printf("want to enter more value then press 1 \n");
        scanf("%d",&x);
    }
    struct node *temp;
    temp=start;

    int count_ll=count(start);
    printf("%d",count_ll);
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->link;
    }
    return 0;
}
void insert(struct node**q,int data)
{
    if((*q)==NULL)
    {
        struct node *r;
        r=(struct node*)malloc(sizeof(struct node));
        r->data=data;
        (*q)=r;
        (*q)->link=NULL;
    }
    else
        insert(&((*q)->link),data);

}
int count(struct node *q)
{
    if(q==NULL)
    {
        return 0;
    }
    else
    {
        return 1+count(q->link);
    }
}
