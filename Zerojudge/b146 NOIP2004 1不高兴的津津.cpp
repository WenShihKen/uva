#include<stdio.h>
int main()
{
	int cram, school;
	while (scanf("%d%d", &school, &cram)!=EOF){
		int i, day, max = 0;
		if (school + cram>max){
			max = school + cram;
			day = 1;
		}
		for (i = 2; i <= 7; i++){
			scanf("%d%d", &school, &cram);
			if (school + cram >= 8){
				if (school + cram>max){
					max = school + cram;
					day = i;
				}
			}
		}
		printf("%d\n", day);
	}
	return 0;
}
