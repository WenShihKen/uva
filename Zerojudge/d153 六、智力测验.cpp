#include<stdio.h>
#include<algorithm>
int all[100000];
int compare(const void *arg1, const void *arg2) {
	return  (*(int *)arg1 - *(int *)arg2);
}
int main()
{
	int time;
	scanf("%d", &time);
	while (time--){
		int many, i;
		scanf("%d", &many);
		for (i = 0; i < many; i++){
			scanf("%d", &all[i]);
		}
		qsort((void *)all, many, sizeof(int), compare);
		if (many % 2 == 0){
			printf("%d\n", all[many / 2 - 1]);
		}
		else{
			printf("%d\n", all[many / 2]);
		}
	}
	return 0;
}
