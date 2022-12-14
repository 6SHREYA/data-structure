#include<stdio.h>
int main()
{
    int i,arr[5],n,max;
    printf("enter the no. of element in array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the arr[%d] element\n",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
      printf("max=%d\n",max);
      printf("\n VANSHIKA KAKKAR ROLL NO. 210321530185");

}

