#include<stdio.h>
#include<math.h>
int temp[5500];
int main()
{
	int i, j, c = 1;
	temp[0] = 2;
	for (i = 3; i < 49000; i += 2){
		int check = 0;
		for (j = 2; j <= sqrtl(i); j++){
			if (i%j == 0){
				check = 1;
				break;
			}
		}
		if (check == 0){
			temp[c] = i;
			c++;
		}
	}
	int in1;
	while (scanf("%d", &in1) != EOF){
		if (in1 == 0)
			break;
		printf("%d = ", in1);
		if (in1 == 1){
			printf("1\n");
		}
		else if (in1 == -1){
			printf("-1\n");
		}
		else{
			int end = 0;
			if (in1 < 0){
				printf("-1");
				in1 *= -1;
				end = 1;
			}
			int i1, t = in1;
			for (i1 = 0; temp[i1] <= sqrtl(t); i1++){
				while (in1%temp[i1] == 0){
					if (end){
						printf(" x %d", temp[i1]);
					}
					else{
						printf("%d", temp[i1]);
						end = 1;
					}
					in1 /= temp[i1];
				}
				if (in1 == 1){
					break;
				}
			}
			if (in1 != 1){
				if (end){
					printf(" x %d", in1);
				}
				else{
					printf("%d", in1);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
