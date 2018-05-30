#include<stdio.h>
int main()
{
	int level, time = 0;
	int a[100] = { 0 };
	double sum = 0.0;
	while (scanf("%d", &level) != EOF){
		int i = 0;
		switch (level){
		case 1:a[level]++; break;
		case 2:a[level]++; break;
		case 3:a[level]++; break;
		case 4:a[level]++; break;
		case 5:a[level]++; break;
		}
		sum += level;
		if (level == 0){
			printf("5 (%2d) |", a[5]);
			for (i = 0; i < a[5]; i++){
				printf("=");
			}
			printf("\n");
			printf("4 (%2d) |", a[4]);
			for (i = 0; i < a[4]; i++){
				printf("=");
			}
			printf("\n");
			printf("3 (%2d) |", a[3]);
			for (i = 0; i < a[3]; i++){
				printf("=");
			}
			printf("\n");
			printf("2 (%2d) |", a[2]);
			for (i = 0; i < a[2]; i++){
				printf("=");
			}
			printf("\n");
			printf("1 (%2d) |", a[1]);
			for (i = 0; i < a[1]; i++){
				printf("=");
			}
			printf("\n");
			printf("Average rating: %.4lf\n", sum / time);
			break;
		}
		time++;
	}
	return 0;
}
