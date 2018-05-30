#include<stdio.h>
int main()
{
	long long int height, jump;
	while (scanf("%lld%lld", &height, &jump) != EOF){
		if (height == 0 && jump == 0){
			printf("Ok!\n");
		}
		else if (height != 0 && jump == 0){
			printf("Impossib1e!\n");
		}
		else if (height%jump == 0){
			printf("Ok!\n");
		}
		else{
			printf("Impossib1e!\n");
		}
	}
	return 0;
}
