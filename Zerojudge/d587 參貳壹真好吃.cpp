#include<stdio.h>
int main()
{
	long long int many;
	while (scanf("%lld", &many) != EOF){
		long long int count,a[100000];
		long long int one = 0, two = 0, three = 0, i;
		for (count = 0; count < many; count++){
			scanf("%lld", &a[count]);
		}
		for (count = 0; count < many; count++){
			if (a[count] == 1){
				one++;
			}
			else if (a[count] == 2){
				two++;
			}
			else if (a[count == 3]){
				three++;
			}
		}
		for (i = 0; i < one; i++){
			printf("1 ");
		}
		for (i = 0; i < two; i++){
			printf("2 ");
		}
		for (i = 0; i < three; i++){
			printf("3 ");
		}
		printf("\n");
	}
}
