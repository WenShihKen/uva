#include<stdio.h>
int main()
{
	long long int time;
	scanf("%lld", &time);
	while (time > 0){
		long long int start = 0, height, up, down, day = 0;
		scanf("%lld%lld%lld", &height, &up, &down);
		if ((height > up) && (up <= down)){
			printf("Poor Snail\n");
		}
		else{
			while (start < height){
				start += up;
				if (start >= height){
					day++;
					break;
				}
				start -= down;
				day++;
			}
			printf("%lld\n", day);
		}
		time--;
	}
	return 0;
}
