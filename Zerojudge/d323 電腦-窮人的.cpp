#include<stdio.h>
#include<algorithm>
#define max 10000010
int compare(const void *arg1, const void *arg2) {
	return  (*(int *)arg1 - *(int *)arg2);	
}
int all[max];
int main()
{
	int many;
	while (scanf("%d", &many)!= EOF){
		int count;
		for (count = 0; count < many; count++){
			scanf("%d", &all[count]);
		}
		qsort((void *)all, many, sizeof(int), compare);
		for (count = 0; count < many; count++){
			printf("%d ", all[count]);
		}
		printf("\n");
	}
	return 0;
}
