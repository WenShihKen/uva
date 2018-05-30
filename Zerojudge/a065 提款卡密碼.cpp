#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char cash[8];
	int a, password;
	while (scanf("%s", cash) != EOF){
		for (a = 0; a < 6; a++){
			password = abs(cash[a] - cash[a + 1]);
			printf("%d", password);
		}
		printf("\n");
	}
	return 0;
}
