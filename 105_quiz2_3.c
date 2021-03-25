#include<stdio.h>
#include<string.h>
int main()
{
    int a,n,i,j,A[100]={1,2,3,4,5,6,7,8,9},B[100],x1,x2,x3;

    scanf("%d",&n);

    x1=n%10;
    n=n/10;
    x2=n%10;
    n=n/10;
    x3=n;

    printf("%d,%d,%d",x1,x2,x3);


    x1=x1*100;
    x2=x2*10;

     a=x1+x2+x3;
    printf("\n%d",a);

}
