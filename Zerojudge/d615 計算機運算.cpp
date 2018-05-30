#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int 
char in1[1000005];
int main()
{
	int line;
	scanf("%d\n", &line);
	while (line--){
		gets(in1);
		ll a1 = 0, temp = 0;
		ll i, len = strlen(in1), j, k, count = 0;
		for (i = 0; in1[i] != ' '; i++){
			a1 = a1 * 10 + (in1[i] - 48);
		}
		for (j = i + 1; j < len; j++){
			if (in1[j] == '+'){
				for (k = j + 2; in1[k] != ' '&&k < len; k++){
					temp = temp * 10 + in1[k] - 48;
				}
				a1 += temp;
				temp = 0;
			}
			else if (in1[j] == '-'){
				for (k = j + 2; in1[k] != ' '&&k < len; k++){
					temp = temp * 10 + in1[k] - 48;
				}
				a1 -= temp;
				temp = 0;
			}
			else if (in1[j] == '*'){
				for (k = j + 2; in1[k] != ' '&&k < len; k++){
					temp = temp * 10 + in1[k] - 48;
				}
				a1 *= temp;
				temp = 0;
			}
			else if (in1[j] == '/'){
				for (k = j + 2; in1[k] != ' '&&k < len; k++){
					temp = temp * 10 + in1[k] - 48;
				}
				a1 /= temp;
				temp = 0;
			}
			j = k;
		}
		printf("%lld\n", a1);
	}
	return 0;
}
