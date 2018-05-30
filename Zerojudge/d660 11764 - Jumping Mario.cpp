#include<stdio.h>
int in1[60] = { 0 };
int main()
{
	int c = 1, t;
	scanf("%d", &t);
	while (t--){
		int high = 0, low = 0, many, i;
		scanf("%d", &many);
		for (i = 0; i < many; i++){
			scanf("%d", &in1[i]);
		}
		for (i = 0; i < many - 1; i++){
			if (in1[i]>in1[i + 1]){
				low++;
			}
			else if (in1[i] < in1[i + 1]){
				high++;
			}
		}
		printf("Case %d: %d %d\n", c++, high, low);
	}
	return 0;
}
