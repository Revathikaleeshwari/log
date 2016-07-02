#include<stdio.h>
int main()
{
int n,x[100],y[100]={0},i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
y[x[i]]++;
}
for(i=0;i<n;i++)
{
if(y[x[i]]<1)
{
printf("%d%d\n",x[i],y[x[i]]);
y[x[i]]=0;
break;
}
}
return 0;
}
