#include<stdio.h>
#include<string.h>
int map[504][504] = { 0 };
char in1[504];
int main()
{
	int t;
	scanf("%d\n", &t);
	while (t--){
		int len, wid;
		scanf("%d%d\n", &len, &wid);
		int i, j;
		for (i = 0; i <= 502; i++){
			for (j = 0; j <= 502; j++){
				map[i][j] = 0;
			}
		}
		int line = 1;
		for (i = 0; i < len; i++){
			int len1 = 0, k;
			gets(in1);
			len1 = strlen(in1);
			for (k = 0; k < len1; k++){
				map[line][k + 1] = in1[k] - 48;
			}
			line++;
		}
		int height = 0;
		for (i = 1; i <= len; i++){
			for (j = 1; j <= wid; j++){
				if (map[i][j]){
					if (map[i - 1][j] == 0){
						height++;
					}
					if (map[i + 1][j] == 0){
						height++;
					}
					if (map[i][j + 1] == 0){
						height++;
					}
					if (map[i][j - 1] == 0){
						height++;
					}
				}
			}
		}
		printf("%d\n", height);
	}
	return 0;
}
