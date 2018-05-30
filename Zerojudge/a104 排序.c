#include<stdio.h>
int main()
{
	int all;
	int i, j, temp;
	int a[1001];
	while (scanf("%d", &all) != EOF){
		for (i = 0; i < all; i++){
			scanf("%d", &a[i]);
		}
		for (i = 0; i < all; i++){
			for (j = 0; j < all; j++){
				if (a[i] < a[j]){    
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for (i = 0; i < all; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
