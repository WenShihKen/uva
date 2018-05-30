#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int many;
		scanf("%d", &many);
		int i, ans = 0;
		for (i = 0; i < many; i++){
			int x1, y1, h1, x2, y2, h2;
			scanf("%d%d%d%d%d%d", &x1, &y1, &h1, &x2, &y2, &h2);
			int temp;
			temp = h1>h2 ? h1 : h2;
			ans = temp > ans ? temp : ans;
		}
		printf("%d\n", ans);
	}
	return 0;
}
