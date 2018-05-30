#include <stdio.h>
int main(){
	int s, count = 0;
	while ((scanf("%d",&s)!=EOF)){
		if (s < 0){
			break;
		}
		printf("Case %d:\n", ++count);
		int have[12], need[12];
		for (int i = 0; i < 12; i++)
			scanf("%d", &have[i]);
		for (int i = 0; i<12; i++)
			scanf("%d", &need[i]);
		for (int i = 0; i<12; i++){
			if (s >= need[i]){
				printf("No problem! :D\n");
				s -= need[i];
			}
			else
				printf("No problem. :(\n");
			s += have[i];
		}
	}
	return 0;
}
