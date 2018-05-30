#include<stdio.h>
#include<algorithm>
int a[1000] = { 0 };
int compare(const void *arg1, const void *arg2) {
	return  (*(int *)arg1 - *(int *)arg2);
}
int main()
{
	int time;
	scanf("%d", &time);
	while (time--){
		int len, i;
		scanf("%d", &len);
		for (i = 0; i < 4; i++){
			scanf("%d", &a[i]);
		}
		for (i = 4; i < len; i++){
			a[i] = a[i - 1] + a[i - 4];
		}
		qsort((void *)a, len, sizeof(int), compare);
		printf("%d\n", a[len / 2]);
	}
	return 0;
}
