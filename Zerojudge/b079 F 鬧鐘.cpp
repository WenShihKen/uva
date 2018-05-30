#include<stdio.h>
#define max 1000005
long long int all[max];
int main()
{
	int many;
	while (scanf("%d", &many) != EOF){
		if (many == 0){
			break;
		}
		int start;
		all[1] = 1; all[2] = 1;
		for (start = 3; start <= many; start++){
			all[start] = all[start - all[start - 1]] + all[start - 1 - all[start - 2]];
		}
		printf("%lld\n", all[many]);
	}
	return 0;
}
