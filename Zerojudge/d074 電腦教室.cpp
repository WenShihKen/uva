#include<stdio.h>
int main()
{
	int many, count;
	int a[100];
	int i, j, temp;
	while (scanf("%d", &many) != EOF){
		for (count = 0; count < many; count++){
			scanf("%d", &a[count]);
		}
		for (i = 0; i < many; i++){
			for (j = 0; j < many; j++){
				if (a[j] < a[i]){
					temp = a[i];
					a[j] = a[i];
					a[j] = temp;
				}
			}
		}
		printf("%d\n", a[many - 1]);
		many = 0; count = 0; i = 0; j = 0; temp = 0;
	}
	return 0;
}
