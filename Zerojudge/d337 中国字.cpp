#include<stdio.h>
#include<string.h>
char s[500000];
int main()
{
while(gets(s)){
int i,i1;
i=strlen(s);
for(i1=0;i1<i;i1++){
if(s[i1]>126||s[i1]<0){
printf("%c",s[i1]);
}
}
printf("\n");
}
return 0;
}
