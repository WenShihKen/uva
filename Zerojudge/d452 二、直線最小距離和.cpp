#include<stdio.h>
#include<algorithm>
int all[1006] = { 0 };
int compare(const void *arg1, const void *arg2) {
	return  (*(int *)arg1 - *(int *)arg2);
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int many, i;
		scanf("%d", &many);
		for (i = 0; i < many; i++){
			scanf("%d", &all[i]);
		}
		qsort((void *)all, many, sizeof(int), compare);
		int t = i / 2;
		int out1 = 0;
		for (i = 0; i < t; i++){
			out1 += (all[t] - all[i]);
		}
		for (i = t + 1; i < many; i++){
			out1 += (all[i] - all[t]);
		}
		printf("%d\n", out1);
	}
	return 0;
}
