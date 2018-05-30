#include<stdio.h>
#include<math.h>
int main()
{
	int time;
	scanf("%d", &time);
	while (time > 0){
		int many, count, i;
		int p[1000];
		scanf("%d%d", &many, &count);
		for (i = 0; i < many; i++){
			scanf("%d", &p[i]);
		}
		while (count > 0){
			int d;
			int start, end, i1, num;
			int max = -1000000, ave, sum = 0;
			scanf("%d", &d);
			if (d == 1){
				scanf("%d%d", &start, &end);
				for (i1 = start; i1 <= end; i1++){
					if (p[i1] >= max){
						max = p[i1];
					}
				}
				printf("%d\n", max);
			}
			else if (d == 2){
				scanf("%d%d", &start, &end);
				for (i1 = start; i1 <= end; i1++){
					sum += p[i1];
				}
				if (sum > 0){
					ave = floor(sum / ((end - start) + 1));
				}
				else if (sum<=0){
					ave = ceil(sum / ((end - start) + 1));
				}
				printf("%d\n", ave);
			}
			else if (d == 3){
				scanf("%d", &num);
				printf("%d\n", p[num]);
			}
			count--;
		}
		time--;
	}
	return 0;
}
