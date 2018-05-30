#include<stdio.h>
int main()
{
	int hh, mm;
	while (scanf("%d%d", &hh, &mm) != EOF){
		if (hh == 7 &&mm >= 30){
			printf("At School\n");
		}
		else if (hh < 17&&hh>7){
			printf("At School\n");
		}else{
			printf("Off School\n");
		}
		hh = 0; mm = 0;
	}
	return 0;
}
