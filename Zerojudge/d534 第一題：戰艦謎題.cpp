#include<stdio.h>
int main()
{
	int y2, y1, x1, x2;
	while (scanf("%d%d%d%d", &y2, &y1, &x1, &x2) != EOF){
		int a1, a2, a3, a4, count = 0;
		for (a1 = 0; a1 < 4; a1++){
			for (a2 = 0; a2 < 4; a2++){
				if (a1 == a2){
					continue;
				}
				for (a3 = 0; a3 < 4; a3++){
					if (a1 == a3 || a2 == a3){
						continue;
					}
					for (a4 = 0; a4 < 4; a4++){
						if (a1 == a4 || a2 == a4 || a3 == a4){
							continue;
						}
						else{
							if (a1 + a2 == y2&&a1 + a3 == x1&&a2 + a4 == x2&&a3 + a4 == y1){
								count = 1;
								break;
							}
						}
					}
					if (a1 + a2 == y2&&a1 + a3 == x1&&a2 + a4 == x2&&a3 + a4 == y1){
						count = 1;
						break;
					}
				}
				if (a1 + a2 == y2&&a1 + a3 == x1&&a2 + a4 == x2&&a3 + a4 == y1){
					count = 1;
					break;
				}
			}
			if (a1 + a2 == y2&&a1 + a3 == x1&&a2 + a4 == x2&&a3 + a4 == y1){
				count = 1;
				break;
			}
		}
		if (count){
			printf("%d %d\n", a1, a2);
			printf("%d %d\n", a3, a4);
		}
		else{
			printf("No solutions.\n");
		}
	}
	return 0;
}
