#include<stdio.h>
int main(){
    int n,add;
    while(scanf("%d",&n) && n){
        add=0;
        while(n%2){
            add++;
            n/=2;
        }
        printf("%d\n",add);
    }
}
