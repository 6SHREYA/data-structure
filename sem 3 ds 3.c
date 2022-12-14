#include<stdio.h>
int main()
{
    int i,arr[5],n;
    printf("enter ther element to be searched");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        printf("enter the arr[%d] element\n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]==n)
        {
            printf("yes it is in array");
           break;
        }
        if(i==4)
           printf("no such element exist\n");
    }



}

