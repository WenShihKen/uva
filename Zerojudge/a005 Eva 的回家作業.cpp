#include<stdio.h>
int main()
{
	int a,b;
	int a1,a2,a3,a4,c;
	scanf("%d",&a);
	for(b=0;b<a;b++){
		scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
		if(a2-a1==a3-a2){
			c=a4+a2-a1;
			printf("%d %d %d %d %d\n",a1,a2,a3,a4,c);
		}else if(a2/a1==a3/a2){
			c=a4*(a2/a1);
			printf("%d %d %d %d %d\n",a1,a2,a3,a4,c);
		}
	}
	return 0;
}
