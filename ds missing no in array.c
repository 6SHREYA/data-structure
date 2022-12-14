#include<stdio.h>
int main()
{
    int i,arr[10],n,b,c;
    printf("enter the no. of elements in array");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        printf("enter the arr[%d] element\n",i);
        scanf("%d",&arr[i]);
    }

        b=arr[0];
        for(i=0;i<n-1;i++)
            b=b^arr[i];
        for(i=1,c=0;i<=n;i++)
           c=c^i;
        c=c^b;
        printf("missing element=%d",c);
}
