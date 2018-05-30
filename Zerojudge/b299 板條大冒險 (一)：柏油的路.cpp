#include<stdio.h>
#include<algorithm>
int compare(const void *arg1, const void *arg2) {
	return  (*(int *)arg1 - *(int *)arg2);
}
int main()
{
	int time;
	scanf("%d", &time);
	while (time > 0){
		int width, roads, a[5000] = { 0 }, i;
		scanf("%d%d", &width, &roads);
		for (i = 0; i < roads; i++){
			scanf("%d", &a[i]);
		}
		qsort((void *)a, roads, sizeof(int), compare);
		if (width>a[0]){
			printf("NOOOO!!! JACKY XX!\n");
		}
		else{
			printf("YEEES!!! INKER!\n");
		}
		time--;
	}
	return 0;
}
