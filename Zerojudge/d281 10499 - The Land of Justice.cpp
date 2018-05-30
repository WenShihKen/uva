#include<stdio.h>
int main()
{
	long long int in1;
	while (scanf("%lld", &in1) != EOF){
		if (in1 < 0){
			break;
		}
		else{
			if (in1 == 1){
				printf("0%%\n");
			}
			else{
				printf("%lld%%\n", in1 * 25);
			}
		}
	}
	return 0;
}
