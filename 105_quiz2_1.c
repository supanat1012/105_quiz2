#include<stdio.h>
int main()
{
    int n,i,j,a;
    int A[100],B[100],result[100];

    scanf("%d",&n);

    for(i=2;i<=100;i++)
    {
        A[i-1]=i*i*i;
    }
    for(i=1;i<=100;i++)
    {
        if((A[i]%i)==0)
            result[i]=i;
    }

    for(i=1;i<=100;i++)
    {
       printf("%d,",result[i]);
    }

}
