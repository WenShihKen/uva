#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[50001];
int main()
{
    int n; int d;int ch;
    while(scanf("%d",&n)&&n!=0)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        ch=1;  
        sort(a,a+n);
        if(n==1){printf("Yes\n");goto abc;}
     
        d=a[1]-a[0];
     
        for(int i=1;i<n;i++)
            if(a[i]-a[i-1]!=d){ch=0;}
         
        if(ch){printf("Yes\n");}
        else{printf("No\n");}
       
        abc:;
    }  
}
