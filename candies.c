#include <stdio.h>
int check(int ,int);
int main()
{
    int n,c=0,s=0;
    scanf("%d",&n);
    int a[n],i=0,j,t=0;
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    while(i!=n)
    {
        if(a[i]<a[i+1])
        {  
            s=s+1;
            printf("%d",s);
        }
        else 
        {
            s=1;
            printf("%d",s);
        }
        t=t+s;
        i++;
    }
    printf("%d",t); 
    return 0; 
}
