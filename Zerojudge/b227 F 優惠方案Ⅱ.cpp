#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int x,y,smile,lion;
scanf("%d %d",&x,&y);   
      smile=(x/2*y)*6/10+(x/2*y%5!=0)+(x-x/2)*y;   
       lion=x*y*812/1000+((x*y)%250!=0);   
       if(lion>smile) printf(": )\n");   
       else if(smile>lion) printf("8-12=-4\n");   
       else printf("SAME\n");
}
return 0;
}
