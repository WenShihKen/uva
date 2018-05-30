#include<stdio.h>
int main()
{
	int career, level;
	while (scanf("%d%d", &career, &level) != EOF){
		int count, skillpoint = 1;
		if (career == 1 || career == 3 || career == 4){
			for (count = 11; count <= level; count++){
				skillpoint += 3;
				if (count == 30 || count == 70){
					skillpoint++;
				}
				else if (count == 120){
					skillpoint = skillpoint + 3;
				}
			}
		}
		else if (career == 2){
			for (count = 9; count <= level; count++){
				skillpoint += 3;
				if (count == 30 || count == 70){
					skillpoint++;
				}
				else if (count == 120){
					skillpoint = skillpoint + 3;
				}
			}
		}
		else if (career == 0){
			skillpoint = 0;
		}
		printf("%d\n", skillpoint);
	}
	return 0;
}
