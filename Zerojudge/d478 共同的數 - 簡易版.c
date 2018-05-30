#include<stdio.h>
int main()
{
	int time, nums;
	scanf("%d%d", &time, &nums);
	while (time > 0){
		int count, a[100000], b[100000];
		int i = 0, j = 0;
		int same = 0;
		for (count = 0; count < nums; count++){
			scanf("%d", &a[count]);
		}
		for (count = 0; count < nums; count++){
			scanf("%d", &b[count]);
		}
		i = j = 0;
		while (i < nums&&j < nums){
			if (a[i] == b[j]){
				same++;
				i++; j++;
			}
			else if (a[i] < b[j]){
				i++;
			}
			else{
				j++;
			}
		}
		printf("%d\n", same);
		time--;
	}
	return 0;
}
