#include<stdio.h>
int f[20016];
int main(){
    int n,i;
    f[0]=1;f[1]=1;
    for(i=2;i<20016;i++)f[i]=(f[i-1]+f[i-2])%10007;
    while(scanf("%d",&n)==1)printf("%d\n",f[n%20016]);
    return 0;
}
