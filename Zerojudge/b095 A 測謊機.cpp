#include<stdio.h>
int main()
{
	int in1, in2;
	while (scanf("%d%d", &in1, &in2) != EOF){
		int max, i, wrong = 0, guess, c = 0, count = 0;
		if (in1 >= in2){
			max = in1;
		}
		else{
			max = in2;
		}
		for (i = 0; i < 30; i++){
			scanf("%d", &guess);
			if (guess == 0){
				continue;
			}
			else if (guess != max){
				wrong++;
			}
			else if (guess == max){
				c++;
			}
			if (c != 0 && wrong < 3){
				count = 1;
			}
		}
		if (count == 0){
			printf("N\n");
		}
		else{
			printf("Y\n");
		}
	}
	return 0;
}
