#include<stdio.h>
int main()
{
    int n,i,j,a;
    int A[100],B[100],cubefree[100];

    scanf("%d",&n);

    for(i=1;i<=100;i++)
    {
        A[i]=i*i*i;
        //printf("%d,",A[i]);
    }

    for(i=1,j=1;i<=100;i++)
    {
        if(A[i]%i==0)
          {
              cubefree[j]=i;
              printf("%d,",cubefree[j]);
              j++;

          }
    }


   /* for(i=1;i<=n;i++)
    {
        if(n==result[i])
        {
            printf("%d",i);
        }

    }*/

}
