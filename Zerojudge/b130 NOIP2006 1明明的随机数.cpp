#include<stdio.h>
#include<algorithm>
int many[1009] = { 0 };
int compare(const void *arg1, const void *arg2) {
	return  (*(int *)arg1 - *(int *)arg2);
}
int main()
{
	int in1;
	while (scanf("%d", &in1) != EOF){
		int i, how = 1;
		for (i = 0; i < in1; i++){
			scanf("%d", &many[i]);
		}
		qsort((void *)many, in1, sizeof(int), compare);
		for (i = 1; i < in1; i++){
			if (many[i] == many[i - 1]){
				continue;
			}
			else{
				how++;
			}
		}
		printf("%d\n", how);
		printf("%d ", many[0]);
		for (i = 1; i < in1; i++){
			if (many[i] == many[i - 1]){
				continue;
			}
			else{
				printf("%d ", many[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
