#include<stdio.h>
int main()
{
	int in1, in2, in3, start, time = 0;
	while (scanf("%d%d%d%d", &in1, &in2, &in3, &start) != EOF){
		if (in1 + in2 + in3 + start == -4)
			break;
		int i;
		for (i = 1; i <= 21252; i++){
			if (i%23 == in1%23 && i%28 == in2%28 && i%33 == in3%33){
				break;
			}
		}
		time++;
		printf("Case %d: the next triple peak occurs in %d days.\n", time, (i + 21251 - start) % 21252 + 1);
	}
	return 0;
}
