#include<stdio.h>
int main(){
	int a1, a2;
	while (scanf("%d%d", &a1, &a2) != EOF){
		int in[100] = { 0 }, b1, b2, c1, c2, i, x2 = 0, x3 = 0;
		scanf("%d%d", &b1, &b2);
		scanf("%d%d", &c1, &c2);
		for (i = a1; i <= a2; i++){
			in[i]++;
		}
		for (i = b1; i <= b2; i++){
			in[i]++;
		}
		for (i = c1; i <= c2; i++){
			in[i]++;
		}
		for (i = 0; i <= 23; i++){
			if (in[i] == 2){
				x2++;
			}
			else if (in[i] == 3){
				x3++;
			}
		}
		if (x2 > 2&&(a2!=b1&&b2!=c1)){
			printf("QQ\n");
		}
		else if (x2 >= 2&&(b1<a2||c1<b2)){
			printf("QQ\n");
		}
		else{
			printf("Happy\n");
		}
	}
	return 0;
}
