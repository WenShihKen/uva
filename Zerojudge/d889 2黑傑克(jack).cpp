#include<stdio.h>
int main()
{
	int many;
	while (scanf("%d", &many) != EOF){
		int count, a[1000], i;
		int time, wait = 30;
		for (count = 0; count < many; count++){
			scanf("%d", &a[count]);
		}
		if (a[0]>30){
			time = 30;
		}
		else{
			time = a[0];
		}
		i = 0;
		while (wait > a[i] &&i<many){
			if (a[i] < time){
				time += 5;
			}
			else{
				time = a[i] + 5;
			}
			wait = time + 30;
			i++;
		}
		printf("%d\n", wait);
	}
	return 0;
}
