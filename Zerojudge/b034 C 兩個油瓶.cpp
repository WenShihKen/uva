#include <stdio.h>
int GCD(int n, int m);
int main()
{
int n, m, p, total = 0;;
while(scanf("%d%d%d", &n, &m, &p) == 3){
if(n == 0 && m == 0 && p == 0) break;
int num = GCD(n, m);
if(num && p%num == 0)
puts("Yes");
else
puts("No");
}
return 0;
}
int GCD(int n, int m){
while(m){
int temp = m;
m = n%m;
n = temp;
}
return n;
}
