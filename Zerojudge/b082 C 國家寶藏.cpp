#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--){
		int line, i, s, e, start;
		int t[300] = { 0 };
		char in1[300], t1[10];
		scanf("%d\n", &line);
		scanf("%d%s%d", &s, &t1, &e);
		t[s] = e;
		in1[s] = t1[0];
		start = s;
		for (i = 1; i < line; i++){
			scanf("%d%s%d", &s, &t1, &e);
			t[s] = e;
			in1[s] = t1[0];
		}
		while (t[start] != 0){
			printf("%c", in1[start]);
			start = t[start];
		}
		printf("\n");
	}
	return 0;
}
