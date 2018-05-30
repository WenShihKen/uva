#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
struct num
{
	int n;
	int r;
	int odd;
}all[100000];
bool cmp(num out1, num out2)
{
	if (out1.r != out2.r){
		return out1.r < out2.r;
	}
	int count = out1.odd + out2.odd;
	if (count == 2){
		return out1.n > out2.n;
	}
	if (count == 0){
		return out1.n < out2.n;
	}
	return out1.odd;
}
int main()
{
	int in1, in2;
	while (scanf("%d%d", &in1, &in2) != EOF){
		if (in1 == 0 && in2 == 0){
			printf("0 0\n");
			break;
		}
		int i;
		for (i = 0; i < in1; i++){
			scanf("%d", &all[i].n);
			all[i].r = all[i].n%in2;
			all[i].odd = abs(all[i].n % 2);
		}
		sort(all, all + in1, cmp);
		printf("%d %d\n", in1, in2);
		for (i = 0; i < in1; i++){
			printf("%d\n", all[i].n);
		}
	}
	return 0;
}
