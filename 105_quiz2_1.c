#include<stdio.h>
int main()
{
    int n,i,j,a;
    int A[100],B[100],cubefree[100];

    scanf("%d",&n);

    for(i=2;i<=100;i++)
    {
        A[i-1]=i*i*i;
        //printf("%d,",A[i]);
    }

    for(i=1,j=1;i<=n;i++)
    {
        if(i%A[i]!=0)
        {
            cubefree[j]=i;
            j++;
        }
    }

    for(i=1;i<=n;i++)
    {

            printf("%d,",cubefree[i]);

    }

}
