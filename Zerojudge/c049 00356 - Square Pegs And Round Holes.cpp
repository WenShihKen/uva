#include<stdio.h>
int main()
{
	int length;
	while (scanf("%d", &length) != EOF){
		int incomplete = 0, complete = 0;
		int i, j, all = (2 * length - 1)*(2 * length - 1);
		for (i = 0; i < length + 1; i++){
			for (j = 0; j < length + 1; j++){
				int l1, r1, l2, r2;//左下 右下 左上 右上 
				l1 = 4 * (i*i + j*j);
				r1 = 4 * ((i + 1)*(i + 1) + j*j);
				l2 = 4 * (i*i + (j + 1)*(j + 1));
				r2 = 4 * ((i + 1)*(i + 1) + (j + 1)*(j + 1));
				if (l1 <= all&&r1 <= all&&l2 <= all&&r2 <= all)
					complete++;
				else
					if (l1 <= all || r1 <= all || l2 <= all || r2 <= all)
						incomplete++;
					else
						break;
			}
		}
		printf("In the case n = %d, %d cells contain segments of the circle.\n", length, 4 * incomplete);
		printf("There are %d cells completely contained in the circle.\n", 4 * complete);
	}
	return 0;
}
