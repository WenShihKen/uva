#include <stdio.h>
struct data{
	char p1[10];
	char p2[10];
	int num;
};
int main()
{
	int T, n;
	scanf("%d", &T);
	while (T--){
		scanf("%d", &n);
		data *arr = new data[n];
		int Min = 0, p = -1;
		for (int i = 0; i < n; i++){
			scanf("%s%s%d", arr[i].p1, arr[i].p2, &arr[i].num);
			if (arr[i].num < Min)
				Min = arr[i].num, p = i;
		}
		if (p != -1) printf("%s %s\n", arr[p].p1, arr[p].p2);
		else printf("Are you kidding me?\n");
	}
	return 0;
}
