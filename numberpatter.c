#include<stdio.h>
main()
{
    int a[10][10]={0},i,k,j,low=0,n=1,top;
    scanf("%d",&k);
    top=k-1;
    for(i=0;i<=(k/2);i++,low++,top--)
    {
        for(j=low;j<=top;j++,n++)
            a[i][j]=n;
        for(j=low+1;j<=top;j++,n++)
            a[j][top]=n;
        for(j=top-1;j>=low;j--,n++)
            a[top][j]=n;
        for(j=top-1;j>low;j--,n++)
            a[j][low]=n;
    }
    for(i=0;i<k;i++)
    {
        printf("\n\n\t");
        for(j=0;j<k;j++)
        {
            printf("%4d",a[i][j]);
        }
    }
}
