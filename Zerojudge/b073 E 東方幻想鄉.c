#include<stdio.h>
#include<math.h>
int main()
{
	long long int missiles, time, x, y;
	while (scanf("%lld%lld%lld%lld", &missiles, &time, &x, &y) != EOF){
		long long int missile_x, missile_y, move_x, move_y, hit = 0;
		if (missiles == 0 && time == 0 && x == 0 && y == 0){
			break;
		}
		while (missiles > 0){
			scanf("%lld%lld%lld%lld", &missile_x, &missile_y, &move_x, &move_y);
			if ((y - missile_y)*move_x == (x - missile_x)*move_y){
				if (abs(x - missile_x) <= abs(move_x*time)){
					if (abs(y - missile_y) <= abs(move_y*time)){
						if ((move_x > 0 || move_y > 0) && (x - missile_x > 0 || y - missile_y > 0)){
							hit++;
						}
						else if ((move_x < 0 || move_y < 0) && (x - missile_x < 0 || y - missile_y < 0)){
							hit++;
						}
					}
				}
			}
			missiles--;
		}
		if (hit == 0){
			printf("false\n");
		}
		else{
			printf("true\n");
		}
	}
	return 0;
}
