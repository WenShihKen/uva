#include<stdio.h>
int main()
{
	long long int in1, in2;
	while (scanf("%lld%lld", &in1, &in2) != EOF){
		long long int last = 0, count = 0;
		if (in1 == 0 && in2 == 0){
			break;
		}
		while (in1 > 0 || in2 > 0){
			if ((in1 % 10) + (in2 % 10) + last >= 10){
				count++;
				last = 1;
			}
			else{
				last = 0;
			}
			in1 /= 10;
			in2 /= 10;
		}
		if (count == 0){
			printf("No carry operation.\n");
		}
		else if(count==1){
			printf("1 carry operation.\n");
		}
		else{
			printf("%d carry operations.\n", count);
		}
	}
	return 0;
}
