#include<stdio.h>  /*直接爆開...*/
#include<math.h>
int main()
{
	int in1;
	while (scanf("%d", &in1) != EOF){
		int bit[20] = { 0 }, max = powl(2, in1) - 1;
		int i = 0;
		for (i = 0; i <= max; i++){
			int t = i, time = 0, j = 0;
			while (t > 0){
				bit[j] = t % 2;
				t /= 2;
				j++, time++;
			}
			if (time < in1){
				for (int i1 = time; i1 < in1; i1++){
					printf("0");
				}
				for (int i2 = j - 1; i2 >= 0; i2--){
					printf("%d", bit[i2]);
				}
			}
			else{
				for (int i2 = j - 1; i2 >= 0; i2--){
					printf("%d", bit[i2]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
