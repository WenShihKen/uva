#include<stdio.h>
int main()
{
	int a[3];
	while (scanf("%d%d%d", &a[0], &a[1], &a[2]) != EOF){
		int b[3], c[3], d[3], e[3];
		int sum = 0 , i, j, tempa, tempb, tempc, tempd, tempe;
		scanf("%d%d%d", &b[0], &b[1], &b[2]);
		scanf("%d%d%d", &c[0], &c[1], &c[2]);
		scanf("%d%d%d", &d[0], &d[1], &d[2]);
		scanf("%d%d%d", &e[0], &e[1], &e[2]);
		for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				if (a[i] < a[j]){
					tempa = a[i];
					a[i] = a[j];
					a[j] = tempa;
				}
			}
		}
		for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				if (b[i] < b[j]){
					tempb = b[i];
					b[i] = b[j];
					b[j] = tempb;
				}
			}
		}
		for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				if (c[i] < c[j]){
					tempc = c[i];
					c[i] = c[j];
					c[j] = tempc;
				}
			}
		}
		for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				if (d[i] < d[j]){
					tempd = d[i];
					d[i] = d[j];
					d[j] = tempd;
				}
			}
		}
		for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				if (e[i] < e[j]){
					tempe = e[i];
					e[i] = e[j];
					e[j] = tempe;
				}
			}
		}
		if (a[0] + a[1] > a[2]){
			sum += 1;
		}
		else{
			sum += 0;
		}
		if (b[0] + b[1] > b[2]){
			sum += 1;
		}
		else{
			sum += 0;
		}
		if (c[0] + c[1] > c[2]){
			sum += 1;
		}
		else{
			sum += 0;
		}
		if (d[0] + d[1] > d[2]){
			sum += 1;
		}
		else{
			sum += 0;
		}
		if (e[0] + e[1] > e[2]){
			sum += 1;
		}
		else{
			sum += 0;
		}
		printf("%d\n", sum);

	}
	return 0;
}
