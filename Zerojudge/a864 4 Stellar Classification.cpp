#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000] = { 0 };
	while (scanf("%s",a)!=EOF){
		int c = 0;
		if (c == strcmp(a,"END")){
			break;
		}
		double in1, in2, temp = 0.0;
		scanf("%lf%lf", &in1, &in2);
		temp = in1 - in2;
		if (temp >= -0.350&&temp <= -0.251){
			printf("%s %.2lf O\n", a, temp);
		}
		else if (temp >= -0.250&&temp <= -0.001){
			printf("%s %.2lf B\n", a, temp);
		}
		else if (temp >= 0.000&&temp <= 0.249){
			printf("%s %.2lf A\n", a, temp);
		}
		else if (temp >= 0.250&&temp <= 0.499){
			printf("%s %.2lf F\n", a, temp);
		}
		else if (temp >= 0.500&&temp <= 0.999){
			printf("%s %.2lf G\n", a, temp);
		}
		else if (temp >= 1.000&&temp <= 1.499){
			printf("%s %.2lf K\n", a, temp);
		}
		else if (temp >= 1.500&&temp <= 2.000){
			printf("%s %.2lf M\n", a, temp);
		}
	}
	return 0;
}
