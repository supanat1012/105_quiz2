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

    for(i=1,j=1;i<=100;)
    {
        if(A[i]%j==0)
          {
              cubefree[j]=i;
              printf("%d,",cubefree[j]);
              j++;
          }
        else
        i++;

    }


   /* for(i=1;i<=n;i++)
    {
        if(n==result[i])
        {
            printf("%d",i);
        }

    }*/

}
