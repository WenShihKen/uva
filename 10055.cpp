#include<stdio.h>
int main()
{
	long long int our, enemy;
	while (scanf("%lld%lld", &our, &enemy) != EOF) {
		if (our >= enemy) {
			printf("%lld\n", our - enemy);
		}
		else if (enemy>our)
		{
			printf("%lld\n", enemy - our);
		}
	}
	return 0;
}
