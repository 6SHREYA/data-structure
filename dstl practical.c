//1. WRITE THE PROGRAM IN C TO CREATE TWO SETS AND PERFORM THE INTERSECTION OF SETS

#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],n1,n2,i,j,k=0;
    printf("enter the no. of elements of set a");
    scanf("%d",&n1);
    printf("enter the set a");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("enter the no. of elements of set b");
    scanf("%d",&n2);
    printf("enter the set b");
    for(i=0;i<n2;i++)
       scanf("%d",&b[i]);
    for(i=0;i<n1;i++)
    {
       for(j=0;j<n2;j++)
       {
          if(a[i]==b[j])
          {
            c[k]=a[i];
            k++;
       }
      }
    }
    printf("the intersection is");
    for(i=0;i<k;i++)
            printf("%d ",c[i]);
}
