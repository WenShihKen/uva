#include<stdio.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time > 0){
		int ducks, r, i, x[10000], y[10000], x1, y1, temp = 0, distance = 0, ans = 0;  /*r是半徑*/
		scanf("%d%d", &ducks, &r);
		for (i = 0; i < ducks; i++){
			scanf("%d%d", &x[i], &y[i]);
		}
		scanf("%d%d", &x1, &y1);
		while (temp < ducks){
			distance = (x[temp] - x1)*(x[temp] - x1) + (y[temp] - y1)*(y[temp] - y1);
			if (distance <= r*r){
				ans++;
			}
			distance = 0;
			temp++;
		}
		printf("%d\n", ans);
		time--;
	}
	return 0;
}
