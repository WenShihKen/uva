#include<stdio.h>
long long int in1[10000] = { 0 }, in2[10000] = { 0 };
int main()
{
	int i, j;
	for (i = 0; i < 9999; i++){
		in1[i] = 0;
		in2[i] = 0;
	}
	in1[0] = 16807;
	for (i = 1; i < 17299; i++){
		for (j = 0; j < 9999; j++){
			in2[j] = 16807 * in1[j];
		}
		for (j = 0; j < 9999; j++){
			if (in2[j]>100000000){
				in2[j + 1] += (in2[j] / 100000000);
				in2[j] %= 100000000;
			}
		}
		for (j = 0; j < 9999; j++){
			in1[j] = in2[j];
		}
	}
	for (j = 9999; in2[j] == 0; j--){
	}
	printf("%d", in2[j]);
	for (i = j - 1; i >= 0; i--){
		if (in2[i] < 10){
			printf("0000000%d", in2[i]);
		}
		else if (in2[i] < 100){
			printf("000000%d", in2[i]);
		}
		else if (in2[i] < 1000){
			printf("000000%d", in2[i]);
		}
		else if (in2[i] < 100){
			printf("00000%d", in2[i]);
		}
		else if (in2[i] < 10000){
			printf("0000%d", in2[i]);
		}
		else if (in2[i] < 100000){
			printf("000%d", in2[i]);
		}
		else if (in2[i] < 1000000){
			printf("00%d", in2[i]);
		}
		else if (in2[i] < 10000000){
			printf("0%d", in2[i]);
		}
		else{
			printf("%d", in2[i]);
		}
	}
	return 0;
}
