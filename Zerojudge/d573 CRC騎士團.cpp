#include<stdio.h>
int main()
{
	int group;
	while (scanf("%d", &group) != EOF){
		int a[100005] = { 0 }, many, i, where, j, people, find;
		for (i = 0; i < group; i++){
			scanf("%d%d", &where, &many);
			for (j = 0; j < many; j++){
				scanf("%d", &people);
				a[people] = where;
			}
		}
		scanf("%d", &find);
		printf("%d\n", a[find]);
	}
	return 0;
}
