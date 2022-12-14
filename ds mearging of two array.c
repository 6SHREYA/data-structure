#include<stdio.h>
int main()
{
    int i,a[5],m[10],b[5],n,n1,n2,j,temp;
    printf("enter the no. of elements in a");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("enter the a[%d] element\n",i);
        scanf("%d",&a[i]);
    }
    printf("enter the no. of elements in b");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        printf("enter the b[%d] element\n",i);
        scanf("%d",&b[i]);
    }
    n=n1+n2;
    for(i=0;i<n1;i++)
        m[i]=a[i];
    for(i=0;i<n2;i++)
        m[i+n1]=b[i];
    printf("the  merged array is\n");
      for(i=0;i<n;i++)
        printf("%d\n",m[i]);
        printf("the sorted array is\n");
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(m[i]>m[j])
                {
                    temp=m[i];
                    m[i]=m[j];
                    m[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        printf("%d\n",m[i]);
}




