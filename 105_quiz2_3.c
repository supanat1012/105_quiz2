#include<stdio.h>
#include<string.h>
int main()
{
    int a,n,i=1,j=1,count=0,B[10000],x=0;

    scanf("%d",&n);

    while(1)
    {
        if(i<n&&j<10)
        {
            B[j]=i;
            i++;
            if(j==9)
            {
                i=1;
            }
        }
        else if(i<n&&j<100)
        {
            B[j]=i*11;
            i++;

        }
        if(i>=n)
            break;
        j++;
    }

   for(i=1;i<=50;i++)
        printf("%d,",B[i]);













    printf("%d",count);
}
