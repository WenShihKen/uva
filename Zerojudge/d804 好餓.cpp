#include<stdio.h>
#include<algorithm>
int all[100009] = { 0 };
int compare(const void *arg1, const void *arg2) {
	return  (*(int *)arg1 - *(int *)arg2);
}
int main()
{
	int many, full;
	while (scanf("%d%d", &many, &full) != EOF){
		int i, sum = 0, some = 0;
		for (i = 0; i < many; i++){
			scanf("%d", &all[i]);
		}
		qsort((void *)all, many, sizeof(int), compare);
		for (i = many - 1; i >= 0 && sum < full; i--){
			some++;
			sum += all[i];
		}
		if (sum >= full){
			printf("%d\n", some);
		}
		else{
			printf("OAQ\n");
		}
	}
	return 0;
}
