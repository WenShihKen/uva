#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF){
		if (n == -1)
			break;
		long long int boy = 1, girl = 1, i, all = 2, temp;
		if (n == 0){
			printf("0 1\n");
		}
		else{
			for (i = 1; i < n; i++){
				temp = boy;
				boy = boy + girl;
				girl = temp + 1;
				temp = 0;
			}
			printf("%lld %lld\n", boy, boy + girl);
		}
	}
	return 0;
}
