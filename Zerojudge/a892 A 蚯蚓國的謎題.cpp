#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int i, a[6] = { 0 }, j, k, count = 0;
		long long int sum = 1;
		for (i = 0; i < 6; i++){
			scanf("%d", &a[i]);
			sum *= a[i];
		}
		long long int temp = sqrtl(sum);
		if (temp*temp != sum){
			printf("0\n");
		}
		else{
			for (i = 0; i < 3; i++){
				for (j = i + 1; j < 4; j++){
					for (k = j + 1; k < 5; k++){
						if (a[i] * a[j] * a[k] == temp){
							count++;
						}
					}
				}
			}
			printf("%d\n", count);
		}
	}
	return 0;
}
