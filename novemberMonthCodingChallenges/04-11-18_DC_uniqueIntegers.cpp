#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int j,c=0;
    int f=0;
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        break;
    }
    if(f==1)
    printf("NO");
    else 
    printf("YES");
    return 0;
}
