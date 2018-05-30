#include<stdio.h>
#include<math.h>
int main()
{
	int number, i;
	int a[100];
	int zero = 0, one = 0, two = 0;  //mod
	while (scanf("%d", &number) != EOF){
		for (i = 1; i <= number;i++){
			scanf("%d", &a[i]);
			if (a[i] % 3 == 0){
				zero++;
			}
			else if (a[i] % 3 == 1){
				one++;
			}
			else if (a[i] % 3 == 2){
				two++;
			}
		}
		printf("%d %d %d\n", zero, one, two);
	}
	return 0;
}
