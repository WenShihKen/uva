#include<stdio.h>
int main()
{
	long long unsigned in1, in2;
	while (scanf("%llu%llu", &in1, &in2) != EOF){
		if (in1 == 0 && in2 == 0){
			break;
		}
		else if (in1 <= in2){
			printf("Fair\n");
		}
		else{
			printf("Unfair\n");
		}
	}
	return 0;
}
