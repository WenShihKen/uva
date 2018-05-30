#include<stdio.h>
int main()
{
	double in1[1005] = { 0.0 }, in2[1005] = { 0.0 };
	int many;
	while (scanf("%d", &many) != EOF){
		int i, j, k;
		double max = -99999999.0, temp = 0.0;
		for (i = 0; i < many; i++){
			scanf("%lf%lf", &in1[i], &in2[i]);
		}
		for (i = 0; i < many; i++){
			for (j = i + 1; j < many; j++){
				for (k = j + 1; k < many; k++){
					temp = (in1[i] * in2[j] + in2[i] * in1[k] + in1[j] * in2[k] - in2[j] * in1[k] - in2[i] * in1[j] - in1[i] * in2[k]) / 2;
					if (temp < 0.0){
						temp = 0 - temp;
					}
					if (temp > max){
						max = temp;
					}
				}
			}
		}
		printf("%lf\n", max);
	}
	return 0;
}
