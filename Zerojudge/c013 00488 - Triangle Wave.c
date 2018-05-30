#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time > 0){
		int a, f;
		scanf("%d", &a);
		scanf("%d", &f);
		while (f > 0){
			int go, back, count;
			for (go = 1; go <= a; go++){
				count = go;
				while (count > 0){
					printf("%d", go);
					count--;
				}
				printf("\n");
			}
			for (back = (a - 1); back >= 1; back--){
				count = back;
				while (count > 0){
					printf("%d", back);
					count--;
				}
				printf("\n");
			}
			printf("\n");
			f--;
		}
		time--;
	}
	return 0;
}
