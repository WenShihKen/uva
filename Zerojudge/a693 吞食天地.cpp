#include<stdio.h>
#define Max 100005
int main()
{
	long long int many, time;
	while (scanf("%lld%lld", &many, &time) != EOF){
		long long int i, a[Max], sum[Max], temp = 0;
		a[0] = 0; sum[0] = 0;
		for (i = 1; i <= many; i++){
			scanf("%lld", &a[i]);
			temp += a[i];
			sum[i] = temp;
		}
		while (time > 0){
			long long int start, end;
			scanf("%lld%lld", &start, &end);
			printf("%lld\n", sum[end] - sum[start - 1]);
			time--;
		}
	}
	return 0;
}
