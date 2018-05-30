#include<stdio.h>
#include<math.h>
int main()
{
	int x1, y1, x2, y2;
	while (scanf("%d%d%d%d", &x1, &y1, &x2, &y2) != EOF){
		if (x1 + y1 + x2 + y2 == 0.0)
			break;
		int step = 0;
		if (x1 == x2&&y1 == y2){
			step = 0;
		}
		else if (x1 == x2&&y1 != y2){
			step = 1;
		}
		else if (x1 != x2&&y1 == y2){
			step = 1;
		}
		else if (abs(x1-x2)==abs(y1-y2)){
			step = 1;
		}
		else{
			step = 2;
		}
		printf("%d\n", step);
	}
	return 0;
}
