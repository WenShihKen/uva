#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int bread, in1, in2, all, i, j, check = 0;
		scanf("%d%d%d%d", &bread, &in1, &in2, &all);
		for (i = 0; i <= all; i++){
			for (j = 0; j <= all; j++){
				if (i + j == all){
					if (in1*i + in2*j == bread){
						check = 1;
						break;
					}
				}
			}
			if (check){
				break;
			}
		}
		printf("%d %d\n", i, j);
	}
	return 0;
}
