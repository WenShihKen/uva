#include<stdio.h>
int all[105][105];
int main()
{
	int round;
	scanf("%d", &round);
	while (round--){
		int big, direction, i, j, i1 = 1, j1, time = 0, i2 = 2, i3 = 2, i1_1 = 1;
		int j2, temp1 = 1, temp2, j3;
		for (i = 0; i <= 105; i++){
			for (j = 0; j <= 105; j++){
				all[i][j] = 0;
			}
		}
		scanf("%d%d", &big, &direction);
		j1 = big - 1;
		j2 = big;
		j3 = big;
		int time1 = big - 1, time2 = big - 2;
		if (direction == 1){   /*順時鐘*/
			all[1][1] = 1;
			if (big % 2 == 0){
				for (i = 1; i <= big; i++){
					all[1][i + 1] = all[1][i] + 1;
				}
				for (i = 1; i <= big; i++){
					all[i + 1][big] = all[i][big] + 1;
				}
				for (i = big; i >= 1; i--){
					all[big][i - 1] = all[big][i] + 1;
				}
				j1--;
				temp2 = j1;
				for (; j1 >= 1; j1--){
					if (j1 % 2 == 0){
						for (i = j2; i > i1+1; i--){            /*上跟右*/
							all[i - 1][i1] = all[i][i1] + 1;
						}
						for (i = i1; i < j2 - 1; i++){
							all[i2][i + 1] = all[i2][i] + 1;
						}
						i2++; j2--; i1++;
					}
					else{							/*下和左*/
						for (i = i3; i < j3 - 1; i++){
							all[i + 1][j3 - 1] = all[i][j3 - 1] + 1;
						}
						for (i = j3 - 1; i > i3; i--){
							all[j3 - 1][i - 1] = all[j3 - 1][i] + 1;
						}
						i3++; j3--;
					}
				}
			}
			else{
				for (i = 1; i <= big; i++){
					all[1][i + 1] = all[1][i] + 1;
				}
				for (i = 1; i <= big; i++){
					all[i + 1][big] = all[i][big] + 1;
				}
				for (i = big; i >= 1; i--){
					all[big][i - 1] = all[big][i] + 1;
				}
				j1--;
				temp2 = j1;
				for (; j1 >= 1; j1--){
					if (j1 % 2 == 1){
						for (i = j2; i > i1+1; i--){            /*上跟右*/
							all[i - 1][i1] = all[i][i1] + 1;
						}
						for (i = i1; i < j2 - 1; i++){
							all[i2][i + 1] = all[i2][i] + 1;
						}
						i2++; j2--; i1++;
					}
					else{							/*下和左*/
						for (i = i3; i < j3 - 1; i++){
							all[i + 1][j3 - 1] = all[i][j3 - 1] + 1;
						}
						for (i = j3 - 1; i > i3; i--){
							all[j3 - 1][i - 1] = all[j3 - 1][i] + 1;
						}
						i3++; j3--;
					}
				}
			}
		}
		else if (direction == 2){               /*逆時鐘*/
			all[1][1] = 1;
			if (big % 2 == 0){
				for (i = 1; i <= big; i++){
					all[i + 1][1] = all[i][1] + 1;
				}
				for (i = 1; i <= big; i++){
					all[big][i + 1] = all[big][i] + 1;
				}
				for (i = big; i >= 1; i--){
					all[i - 1][big] = all[i][big] + 1;
				}
				j1--;
				temp2 = j1;
				for (; j1 >= 1; j1--){
					if (j1 % 2 == 0){
						for (i = j3 ; i > i1+1; i--){    /*左  下*/
							all[i1][i-1] = all[i1][i] + 1;
						}
						for (i = i1; i < j3 -1; i++){
							all[i + 1][i3] = all[i][i3] + 1;
						}
						j3--; i1++; i3++;
					}
					else{
						for (i = i2; i < j2-1; i++){
							all[j2-1][i+1] = all[j2-1][i] + 1;
						}
						for (i = j2-1; i > i2; i--){
							all[i-1][j2-1] = all[i][j2-1] + 1;
						}
						i2++; j2--;
					}
				}
			}
			else{
				for (i = 1; i <= big; i++){
					all[i + 1][1] = all[i][1] + 1;
				}
				for (i = 1; i <= big; i++){
					all[big][i + 1] = all[big][i] + 1;
				}
				for (i = big; i >= 1; i--){
					all[i - 1][big] = all[i][big] + 1;
				}
				j1--;
				temp2 = j1;
				for (; j1 >= 1; j1--){
					if (j1 % 2 == 1){
						for (i = j3; i > i1+1; i--){    /*左  下*/
							all[i1][i - 1] = all[i1][i] + 1;
						}
						for (i = i1; i < j3 - 1; i++){
							all[i + 1][i3] = all[i][i3] + 1;
						}
						j3--; i1++; i3++;
					}
					else{
						for (i = i2; i < j2 - 1; i++){
							all[j2 - 1][i + 1] = all[j2 - 1][i] + 1;
						}
						for (i = j2 - 1; i > i2; i--){
							all[i - 1][j2 - 1] = all[i][j2 - 1] + 1;
						}
						i2++; j2--;
					}
				}
			}
		}
		all[1][1] = 1;
		for (i = 1; i <= big; i++){
			for (j = 1; j <= big; j++){
				printf("%5d", all[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
