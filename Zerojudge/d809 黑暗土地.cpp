#include<stdio.h>
#include<math.h>
double x[203] = { 0.0 }, y[203] = { 0.0 };
int main()
{
	int many;
	while (scanf("%d", &many) != EOF){
		int i, j, k;
		for (i = 0; i < many; i++){
			scanf("%lf%lf", &x[i], &y[i]);
		}
		double area = 0.0, temp = 0.0;
		for (i = 0; i < many; i++){
			for (j = i + 1; j < many; j++){
				for (k = j + 1; k < many; k++){
					temp = (0.5*(x[i] * y[j] + x[j] * y[k] + y[i] * x[k] - y[i] * x[j] - y[j] * x[k] - x[i] * y[k]));
					if (temp < 0.0){
						temp = 0 - temp;
					}
					if (temp >= area){
						area = temp;
					}
				}
			}
		}
		printf("%.2lf\n", area);
	}
	return 0;
}
