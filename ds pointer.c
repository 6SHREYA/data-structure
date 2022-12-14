#include<stdio.h>
int main()
{
    int x=10,*p;
    p=&x;
    int **q;
    q=&p;
    int ***s;
    s=&q;
    //printf("add of x= %u \n",*q);   //&x via q
    //printf("value of x= %d \n",**q);   //value of x via q
    //printf("value of p= %u \n",*q);    //value of p via q
    //printf("add of p= %u \n",q);       //&p via q
    //printf("add of q= %u \n",&q);
    //printf("value of q= %d \n",q);

    printf("add of x= %u \n",**s);   //&x via q
    printf("value of x= %d \n",***s);   //value of x via q
    printf("value of p= %u \n",**s);    //value of p via q
    printf("add of p= %u \n",*s);       //&p via q
    printf("add of q= %u \n",s);
    printf("value of q= %d \n",*s);
    printf("add of s= %u \n",&s);
    printf("value of s= %d \n",s);
    return 0;
}
