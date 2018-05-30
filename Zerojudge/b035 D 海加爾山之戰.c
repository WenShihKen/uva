#include<stdio.h>
int main()
{
	int castle;
	int i[10000];
	int count, hours = 0, temp = 0;
	while (scanf("%d", &castle) != EOF){
		if (castle == 0){
			break;
		}
		for (count = 0; count < castle; count++){
			scanf("%d", &i[count]);
			temp = i[count] * i[count];
			hours += temp;
			temp = 0;
		}
		printf("%d\n", hours);
		hours = 0; temp = 0;
	}
	return 0;
}
