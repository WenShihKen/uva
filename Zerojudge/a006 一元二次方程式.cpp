#include<cstdio>
#include<iostream>
#include<cmath>
int main()
{
	int a,a1,b,c,x1,x2,x;
	double r;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF){
		r=(b*b)-(4*a*c);
		if(r>0){
			x1=(-b+sqrt(r))/2*a;
			x2=(-b-sqrt(r))/2*a;
			printf("Two different roots x1=%d , x2=%d\n",x1,x2);
		}else if(r==0){
			x=-b/(2*a);
			printf("Two same roots x=%d\n",x);
		}else if(r<0){
			printf("No real root\n");
		}
	}
	return 0;
}
