#include <stdio.h>
 
int main()
{
int n;
float f,total=0.0;
char nouse;
 
while(scanf("%d%c%f%c",&n,&nouse,&f,&nouse)==4)
{
if(n%2 == 0)
total = total - f;
else
total = total + f;
if(nouse == '\n')
{
printf("%g\n",total);
total = 0.0;
}
}
return 0;
}
