#include<stdio.h>
int main()
{
	int in1;
	while (scanf("%d", &in1) != EOF){
		if (in1 == 0)
			break;
		int i, j, k, l, count = 0, count1 = 0;
		for (i = 0; i < 8; i++){   /*共8段*/
			if (i % 2 == 0){
				for (j = 0; j < in1; j++){  /*一段中共幾行*/
					for (k = 0; k < 8; k++){
						for (l = 0; l < in1; l++){
							if (count % 2 == 0 && count1%2 == 0){
								printf("#");
							}
							else{
								printf(".");
							}
						}
						count1++;
					}
					printf("\n");
				}
				count++;
			}
			else{
				for (j = 0; j < in1; j++){  /*一段中共幾行*/
					for (k = 0; k < 8; k++){
						for (l = 0; l < in1; l++){
							if (count % 2 != 0 && count1 % 2 != 0){
								printf("#");
							}
							else{
								printf(".");
							}
						}
						count1++;
					}
					printf("\n");
				}
				count++;
			}
		}
	}
	return 0;
}
