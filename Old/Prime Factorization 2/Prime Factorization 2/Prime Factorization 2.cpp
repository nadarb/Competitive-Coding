#include <stdio.h>
int main()
{
long int T,n,i,f;
long int a=0;
scanf("%ld",&T);
while (T--)
{
scanf("%ld",&n);
while (n!=1)
{
f=0;
i=0;
while (f==0)
{
if (n%p[i]==0)
{
a+=p[i];
n/=p[i];
f=1;
}
i++;
}
}
}
printf("%ld\n",a);
return 0;
}