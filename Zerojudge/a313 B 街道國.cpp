#include<stdio.h>
int all[10005] = { 0 };
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int many;
		scanf("%d", &many);
		int i, sum = 0, divide = 0;
		for (i = 0; i < many; i++){
			scanf("%d", &all[i]);
			sum += all[i];
			if (sum == 0){
				divide++;
			}
		}
		printf("%d\n", divide);
	}
	return 0;
}
