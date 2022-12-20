#include<stdio.h>
void main()
{

    int a[10][10],b[10][10],c[10][10],i,r1,com1,r2,com2,j,k;
    printf("enter the number of rows and column of first matrix\n");
    scanf("%d %d",&r1,&com1);

    printf("enter the elements of of first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<com1;j++)
        scanf("%d",&a[i][j]);
    }
    printf("entered matrix is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<com1;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("enter the number of rows and column of second matrix\n");
    scanf("%d %d",&r2,&com2);
    printf("enter the elements of of second matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<com2;j++)
        scanf("%d",&b[i][j]);
    }
    printf("entered matrix is\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<com2;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }
    if(com1==r2)
    {
      for(i=0;i<r1;i++)
       {
           for(j=0;j<com2;j++)
           {
               c[i][j]=0;
               for(k=0;k<com1;k++)
                 c[i][j]+=a[k][i]*b[j][k];
           }
        }
      printf("the product is\n");
      for(i=0;i<r2;i++)
      {
        for(j=0;j<com1;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
      }
    }
    else
        printf("multiplication not possible");
}

