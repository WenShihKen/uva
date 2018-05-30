#include<stdio.h>
#include<math.h>
int main()
{
	int start, first, second, end;
	while (scanf("%d%d%d%d", &start, &first, &second, &end) != EOF){
		int degree = 1080, scale = 9;
		if (start == 0 && first == 0 && second == 0 && end == 0){
			break;
		}
		else{
			degree = degree + ((40 + (start - first)) % 40) * 9;
			degree = degree + ((40 + (second - first)) % 40) * 9;
			degree = degree + ((40 + (second - end)) % 40) * 9;
		}
		printf("%d\n", degree);
	}
	return 0;
}
