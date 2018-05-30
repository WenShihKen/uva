#include<stdio.h>
int main()
{
	long long int time;
	scanf("%lld", &time);
		while (time > 0){
			long long int many;
			long long int area, animal, level, sum = 0;
			scanf("%lld", &many);
			while (many > 0){
				scanf("%lld%lld%lld", &area, &animal, &level);
				sum += area*level;
				many--;
			}
			printf("%lld\n", sum);
			time--;
		}
	return 0;
}
