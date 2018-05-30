#include<stdio.h>
#include<math.h>
int main()
{
	long long int our1, our2, bomb1, bomb2, r;
	while (scanf("%lld%lld%lld%lld%lld", &our1, &our2, &bomb1, &bomb2, &r) != EOF){
		long long int temp1, temp2, dis = 0;
		temp1 = abs(our1 - bomb1);
		temp2 = abs(our2 - bomb2);
		dis = temp1 + temp2;
		if (dis > r){
			printf("alive\n");
		}
		else{
			printf("die\n");
		}
	}
	return 0;
}
