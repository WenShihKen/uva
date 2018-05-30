#include<stdio.h>
#include<math.h>
 
int main()
{
int a,b,line=0;
char s;
 
while(scanf(" %d %d",&a,&b)==2)
{
 
if(a==0 && b==0)
{
getchar();
while(scanf("%c",&s)==1)
if(s == '\n')
line++;
printf("All Over. Exceeded 65536 lines!\n");
break;
}
printf("%.0lf\n",pow(a,b));
}       
return 0;
}
