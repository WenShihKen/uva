#include<stdio.h>
int main()
{
	int start, end;
	while (scanf("%d%d", &start, &end) != EOF){
		if (start == -1 && end == -1){
			break;
		}
		int time = 0;
		if (start < end){
			if (end - start >= 50){
				time = 100 - (end - start);
			}
			else{
				time = end - start;
			}
		}
		else{
			if (start - end >= 50){
				time = 100 - (start - end);
			}
			else{
				time = start - end;
			}
		}
		printf("%d\n", time);
	}
	return 0;
}
