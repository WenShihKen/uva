#include<stdio.h>
#include<math.h>
int main()
{
	int line, time = 0;
	while (scanf("%d", &line) != EOF){
		if (line<0)
			break;
		int i;
		for (i = 0; i <= 17; i++){
			int temp = 0;
			temp = powl(2, i);
			if (temp >= line){
				break;
			}
		}
		printf("Case %d: %d\n", ++time, i);
	}
	return 0;
}
