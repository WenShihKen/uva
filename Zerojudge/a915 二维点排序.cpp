#include<stdio.h>
#include<algorithm>
using namespace std;
struct P{
    int x,y;
}s[100005];
int cmp(P a,P b){
    if(a.x!=b.x)
    return a.x<b.x;
    return a.y<b.y;
}
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d%d",&s[i].x,&s[i].y);
    sort(s,s+n,cmp);
    for(i=0;i<n;i++)
        printf("%d %d\n",s[i].x,s[i].y);
    puts("");
}
