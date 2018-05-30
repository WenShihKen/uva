#include<stdio.h>
#include<math.h>
int ans[100001] = { 0 };
int guess[100001] = { 0 };
int check[100001] = { 0 };
int test[100001] = { 0 };
int main()
{
	int door, many;
	while (scanf("%d%d", &door, &many) != EOF){
		int i;
		for (i = 0; i < many; i++){
			scanf("%d", &ans[i]);
		}
		while (door--){
			int temp = 0, c = 0;
			for (i = 0; i <= many; i++){
				scanf("%d", &guess[i]);
			}
			if (guess[many] >= guess[many - 1]){
				check[many - 1] = 1;
				temp = abs(guess[many] - guess[many - 1]);
			}
			else{
				check[many - 1] = 0;
				temp = abs(guess[many] - guess[many - 1]);
			}
			for (i = many - 2; i >= 0; i--){
				if (guess[i] >= temp){
					check[i] = 0;
					temp = abs(guess[i] - guess[i + 1]);
				}
				else{
					check[i] = 1;
					temp = abs(guess[i] - guess[i + 1]);
				}
			}
			for (i = 0; i < many; i++){
				if (check[i] == ans[i]){
					c += 1;
				}
			}
			if (c == many){
				for (i = 0; i <= many; i++){
					test[i] = guess[i];
				}
			}
		}
		for (i = 0; i <= many; i++){
			printf("%d ", test[i]);
		}
		printf("\n");
	}
	return 0;
}
