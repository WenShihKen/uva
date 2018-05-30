#include<stdio.h>
int main()
{
	int times, track = 1;
	scanf("%d", ×);
	while (times > 0){
		int rounds, count, min[100], second[100], best[100], i, j, temp;
		int msum = 0, ssum = 0, avemins, avesecond, fullsecond;
		scanf("%d", &rounds);
		for (count = 0; count < rounds; count++){
			scanf("%d%d", &min[count], &second[count]);
			msum += min[count];
			ssum += second[count];
			best[count] = min[count] * 60 + second[count];
		}
		for (i = 0; i < rounds; i++){
			for (j = 0; j < rounds; j++){
				if (best[i] < best[j]){
					temp = best[i];
					best[i] = best[j];
					best[j] = temp;
				}
			}
		}
		fullsecond = msum * 60 + ssum;
		avemins = (fullsecond / rounds) / 60;
		avesecond = (fullsecond / rounds) % 60;
		printf("Track %d:\n", track);
		printf("Best Lap: %d minute(s) %d second(s).\n",(best[0])/60,(best[0]%60));
		printf("Average: %d minute(s) %d second(s).\n", avemins, avesecond);
		track++; times--;
	}
	return 0;
}
