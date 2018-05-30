#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time--){
		int x1, x2, y1, y2, z1, z2;
		int temp1, temp2, temp3, temp4;
		scanf("%d,%d%d,%d%d,%d", &x1, &x2, &y1, &y2, &z1, &z2);
		temp1 = y1 - x1;
		temp2 = y2 - x2;
		temp3 = z1 - y1;
		temp4 = z2 - y2;
		if (temp1*temp4 == temp2*temp3){
			printf("collinear\n");
		}
		else{
			printf("not collinear\n");
		}
	}
	return 0;
}
