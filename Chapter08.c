#include <stdio.h>
int main()
{
    int n=0;
    int a=1;
    scanf("%d",&n);
    for(int i=1; i<n-1; i++)
    {
        for(int j=1; j<=n-2; j++)
        {
            for(int k=1; k<n; k++)
            {
                printf("%d ",k);
            }
            printf("%d ",j);
        }
        printf("%d ",i);
    }
    return 0;
} //O(n^3)
