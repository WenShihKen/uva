#include<stdio.h>
int main()
{
	long long int in[3];
	while (scanf("%lld%lld%lld", &in[0], &in[1], &in[2]) != EOF){
		int i, j;
		for (i = 0; i <= 2; i++){
			for (j = 0; j <= 2; j++){
				if (in[i] < in[j]){
					long long int temp = 0;
					temp = in[i];
					in[i] = in[j];
					in[j] = temp;
				}
			}
		}
			if ((in[0] * in[0]) + (in[1] * in[1]) < (in[2] * in[2])){
				printf("obtuse triangle\n");
			}
			else if ((in[0] * in[0]) + (in[1] * in[1]) == (in[2] * in[2])){
				printf("right triangle\n");
			}
			else if ((in[0] * in[0]) + (in[1] * in[1]) > (in[2] * in[2])){
				printf("acute triangle\n");
			}
	}
	return 0;
}
