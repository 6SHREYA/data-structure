#include<stdio.h>
int main()
{
    int i,arr[5],n,max,min,j,temp;
    for(i=0;i<5;i++)
    {
        printf("enter the arr[%d] element\n",i);
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
           }
            if(arr[i]<min)
                min=arr[i];
    }
      printf("max=%d\n min=%d\n",max,min);

}

