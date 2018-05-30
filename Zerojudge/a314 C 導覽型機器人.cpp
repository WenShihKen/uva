#include<stdio.h>
int map[18][18];
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int in1, in2, max = 0, next = 1;
		scanf("%d%d", &in1, &in2);
		int i, j;
		for (i = 0; i < 17; i++){
			for (j = 0; j < 17; j++){
				map[i][j] = -1;
			}
		}
		int x, y;
		for (i = 1; i <= in1; i++){
			for (j = 1; j <= in2; j++){
				scanf("%d", &map[i][j]);
				if (map[i][j] == 0){
					x = i, y = j;
				}
				if (map[i][j] > max){
					max = map[i][j];
				}
			}
		}
		int walk = 0;
		while (1){
			while (map[x - 1][y] == next){
				walk++, next++;
				x--;
			}
			if (walk > 0){
				printf("N%d", walk);
			}
			walk = 0;
			while (map[x][y - 1] == next){
				walk++, next++;
				y--;
			}
			if (walk > 0){
				printf("W%d", walk);
			}
			walk = 0;
			while (map[x][y + 1] == next){
				walk++, next++;
				y++;
			}
			if (walk > 0){
				printf("E%d", walk);
			}
			walk = 0;
			while (map[x + 1][y] == next){
				walk++, next++;
				x++;
			}
			if (walk > 0){
				printf("S%d", walk);
			}
			walk = 0;
			if (next >= max){
				break;
			}
		}
		printf("\n");
	}
	return 0;
}
