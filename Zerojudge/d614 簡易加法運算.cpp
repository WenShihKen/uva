#include<stdio.h>
#include<string.h>
#include<math.h>
char a[1000000];
long long int all[500000] = { 0 }, temp[20] = { 0 };
int main()
{
	int line;
	scanf("%d\n", &line);
	while (line--){
		gets(a);
		long long int sum = 0, i, len, j;
		long long int time = 0, count1 = 0, count2 = 0, sum1 = 0;
		long long int ans = 0;
		len = strlen(a);
		for (i = 0; i <= len; i++){
			if (a[i] >= 48 && a[i] <= 57){
				temp[count1] = a[i] - 48;
				count1++;
				time++;
			}
			else if (a[i] == ' ' || a[i] == '\0' || a[i] == '+'){
				if (time == 0){
					continue;
				}
				else if (time == 1){
					all[count2] = temp[count1 - 1];
					count1 = 0;
					count2++;
					time = 0;
				}
				else{
					for (j = 0; j < time; j++){
						sum1 += powl(10, j)*temp[count1 - 1];
						count1--;
					}
					all[count2] = sum1;
					count2++;
					count1 = 0;
					sum1 = 0;
					time = 0;
				}
			}
		}
		for (i = 0; i < count2; i++){
			ans += all[i];
		}
		printf("%lld\n", ans);
	}
	return 0;
}
