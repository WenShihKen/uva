#include<stdio.h>
#include<math.h>
int main()
{
	long long int many;
	while (scanf("%lld", &many) != EOF){
		long long int a[10000], count[10000] = { 0 }, i, j, max, temp, ans = 0;
		for (i = 0; i < many; i++){
			scanf("%lld", &a[i]);
		}
		max = many - 1;
		for (i = 0, j = 1; i < many, j < many; i++, j++){
			temp = abs(a[j] - a[i]); 
			count[temp]++;
		}
		for (i = 1; i <= max; i++){
			if (count[i] == 0){
				break;
			}
			else if (count[i] != 0){
				ans++;
			}
		}
		if (ans == max){
			printf("Jolly\n");
		}
		else{
			printf("Not jolly\n");
		}
	}
	return 0;
}
