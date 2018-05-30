#include<stdio.h>
int main()
{
	int many, a[10000];
	while (scanf("%d", &many) != EOF){
		int count, count1 = 0, flag = many / 2, temp = 0, temp1 = many - 1;
		for (count = 0; count < many; count++){
			scanf("%d", &a[count]);
		}
		count = 0;
		while (temp != flag){
			if (temp == count1){
				for (count = temp; count <= temp1; count++){
					printf("%d ", a[count]);
				}
				printf("\n");
				temp = temp1;
				count1++;
			}
			else if (temp == temp1){
				for (count = temp1; count >= count1; count--){
					printf("%d ", a[count]);
				}
				printf("\n");
				temp = count1;
				temp1--;
			}
		}
		printf("%d\n", a[flag]);
	}
	return 0;
}
