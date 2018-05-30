#include<stdio.h>
int a[100005] = { 0 };
int search(int a[],int f,int l,int r){
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (f > a[mid])
		{
			l = mid + 1;
		}
		else
			if (f < a[mid])
			{
			r = mid - 1;
			}
			else{
				return mid + 1;
			}
	}
	return 0;
}
int main()
{
	int many, time;
	while (scanf("%d%d", &many, &time) != EOF){
		int i;
		for (i = 0; i < many; i++){
			scanf("%d", &a[i]);
		}
		while (time--){
			int find, temp = 0;
			scanf("%d", &find);
			if (find<a[0] || find>a[many-1]){
				temp = 0;
			}
			else{
				temp = search(a, find, 0, many - 1);
			}
			printf("%d\n", temp);
		}
	}
	return 0;
}
