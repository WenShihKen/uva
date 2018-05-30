#include<stdio.h>
#include<string.h>
#include<math.h>
char all[10000000];
int main()
{
	while (gets(all)){
		long long int i, len = strlen(all), temp1 = 0, temp2 = 0;
		if (len == 3 && (all[0] == 48 && all[2] == 48)){
			printf("All Over.\n");
			break;
		}
		if ((all[0] == 48 && all[1] == ' ') || (all[0] == '-'&&all[1] == 48 && all[2] == ' ')){
			printf("0\n");
		}
		else if (all[0] == '-'){  /*一開始為負數*/
			if ((all[1] == '1'&&all[2] == ' ')){
				if ((all[len - 1] - 48) % 2 == 0){
					printf("1\n");
				}
				else{
					printf("-1\n");
				}
			}
			else{
				for (i = 1; all[i] != ' '; i++){
					temp1 = temp1 * 10 + (all[i] - 48);
				}
				for (i = i + 1; i < len; i++){
					temp2 = temp2 * 10 + (all[i] - 48);
				}
				if (temp2 % 2 == 0){
					long long int ans = powl(temp1, temp2);
					printf("%lld\n", ans);
				}
				else{
					long long int ans = powl(temp1, temp2);
					printf("-%lld\n", ans);
				}
			}
		}
		else{
			if ((all[0] == '1'&&all[1] == ' ')){
				printf("1\n");
			}
			else{
				for (i = 0; all[i] != ' '; i++){
					temp1 = temp1 * 10 + (all[i] - 48);
				}
				for (i = i + 1; i < len; i++){
					temp2 = temp2 * 10 + (all[i] - 48);
				}
				long long int ans = powl(temp1, temp2);
				printf("%lld\n", ans);
			}
		}
	}
	return 0;
}
