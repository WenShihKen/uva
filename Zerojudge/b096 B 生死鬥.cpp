#include<stdio.h>
int main()
{
	int hp_p, att_p, def_p, hp_b, att_b, def_b;
	while (scanf("%d%d%d%d%d%d", &hp_p, &att_p, &def_p, &hp_b, &att_b, &def_b) != EOF){
		if (hp_p==0&&att_p==0&&def_p==0&&hp_b==0&&att_b==0&&def_b==0){
			break;
		}
		int round = 0;
		while (hp_b > 0 && hp_p > 0){
			round+=1;
			hp_b -= (att_p - def_b);
			hp_p -= (att_b - def_p);
		}
		if (hp_b <= 0){
			printf("You win in %d round(s).\n", round);
		}
		else if (hp_p <= 0){
			printf("You lose in %d round(s).\n", round);
		}
	}
	return 0;
}
