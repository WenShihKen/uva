#include<stdio.h>
#include<algorithm>
int all[20005] = { 0 };
int compare(const void *arg1, const void *arg2) {
	return  (*(int *)arg1 - *(int *)arg2);
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int in1, i;
		scanf("%d", &in1);
		for (i = 0; i < 20004; i++){
			all[i] = 0;
		}
		int discount = 0;
		for (i = 0; i < in1; i++){
			scanf("%d", &all[i]);
		}
		qsort((void *)all, in1, sizeof(int), compare);
		for (i = in1 - 3; i >= 0; i -= 3){
			discount += all[i];
		}
		printf("%d\n", discount);
	}
	return 0;
}
