#include<stdio.h>
int main()
{
	char in1[5];
	printf("十六進位表示法  相對應的十進位表示法\n");
	while (gets(in1)){
		int sum = 0;
		if (in1[0] >= 'A'&&in1[0] <= 'F'){
			sum += (in1[0] - 'A' + 10) * 16;
		}
		else{
			sum += (in1[0] - '0') * 16;
		}
		if (in1[1] >= 'A'&&in1[1] <= 'F'){
			sum += (in1[1] - 'A' + 10);
		}
		else{
			sum += (in1[1] - '0');
		}
		printf("      %s                 %d\n", in1, sum);
	}
	return 0;
}
