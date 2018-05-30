#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;
long long int exp(long long int a, long long int b);
int main()
{
char str[1000],a[2][100];
while(gets(str)){
int index = 0;
for(int i = 0; i < strlen(str) ;i++){
char temp[100]={'\0'};
int top = 0;
if(str[i] != ' '){
while(str[i] != ' ' && str[i])
temp[top++] = str[i++];
strcpy(a[index++], temp);
}
}
if(!strcmp(a[0], "0") && !strcmp(a[1], "0")) break;
long long int n = atol(a[0]), m = atol(a[1]);
if(n == 0) puts("0");
else if(n == 1) puts("1");
else if(n == -1){
if((a[1][strlen(a[1])-1]-'0')&1) puts("-1");
else puts("1");
}
else printf("%lld\n", exp(n, m));
}
int total = 0;
while(gets(str)) total++;
printf("All Over. Exceeded %d lines!\n", total);
return 0;
}
long long int exp(long long int a, long long int b){
long long int r = 1;
while(b){
if(b&1) r *= a;
a *= a, b >>= 1;
}
return r;
}
