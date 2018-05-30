#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time > 0){
		int in1, in2, in3;
		scanf("%d%d%d", &in1, &in2, &in3);
		if (in1 == in2 || in1 == in3 || in2 == in3){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
		time--;
	}
	return 0;
}
