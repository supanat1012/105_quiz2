#include<stdio.h>
#include<string.h>
int main()
{
    int a,n,i,j,count=0,B[10000];

    scanf("%d",&n);

    for(i=1;i<=n;i++)
        {

            if(i<9)
            {
                B[i]=i;
            }
            else if(i<100)
            {
                B[i]=i*11;
            }

        }

   for(i=1;i<=100;i++)
        printf("%d,",B[i]);













    printf("%d",count);
}
