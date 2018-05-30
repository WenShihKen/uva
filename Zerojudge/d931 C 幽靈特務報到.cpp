#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double x[100005] = { 0.0 };
double y[100005] = { 0.0 };
double wid[100005] = { 0.0 };
double len[100005] = { 0.0 };
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int many, i, score = 0;
		scanf("%d", &many);
		for (i = 0; i < many; i++){
			scanf("%lf%lf%lf%lf", &x[i], &y[i], &wid[i], &len[i]);
		}
		double ax, ay, r;
		scanf("%lf%lf%lf", &ax, &ay, &r);
		for (i = 0; i < many; i++){		/*分上 下 左 右 ,右上右下左上左下*/
			if ((ay>y[i] + len[i] / 2 && (abs(x[i] - ax) <= wid[i] / 2)) || (ay<y[i] - len[i] / 2 && (abs(x[i] - ax) <= wid[i] / 2)) || (ax<x[i] - wid[i] / 2 && (abs(y[i] - ay) <= len[i] / 2)) || (ax>x[i] + wid[i] / 2 && (abs(y[i] - ay) <= len[i] / 2))){
				if ((ay>y[i] + len[i] / 2 && (abs(x[i] - ax) <= wid[i] / 2)) && (r*r >= (ay - (y[i] + len[i] / 2))*(ay - (y[i] + len[i] / 2)))){
					score++;
				}
				else if ((ay<y[i] - len[i] / 2 && (abs(x[i] - ax) <= wid[i] / 2)) && (r*r >=(ay - (y[i] - len[i] / 2))*(ay - (y[i] - len[i] / 2)))){
					score++;
				}
				else if ((ax < x[i] - wid[i] / 2 && (abs(y[i] - ay) <= len[i] / 2)) && (r*r>=(ax - (x[i] - wid[i] / 2))*(ax - (x[i] - wid[i] / 2)))){
					score++;
				}
				else if ((ax > x[i] + wid[i] / 2 && (abs(y[i] - ay) <= len[i] / 2)) && (r*r >= (ax - (x[i] + wid[i] / 2))*(ax - (x[i] + wid[i] / 2)))){
					score++;
				}
			}
			else{
				/*先弄在裡面和右上...之類的*/
				double temp = 0.0;
				if (abs(ax - x[i]) <= wid[i] / 2 && abs(ay - y[i]) <= len[i] / 2){
					score++;
				}
				else{
					if ((ax > x[i] + wid[i] / 2 && ay > y[i] + len[i] / 2) && (r*r >= (ax - (x[i] + wid[i] / 2))*(ax - (x[i] + wid[i] / 2)) + (ay - (y[i] + len[i] / 2))*(ay - (y[i] + len[i] / 2)))){
						score++;
					}
					else if ((ax > x[i] + wid[i] / 2 && ay < y[i] - len[i] / 2) && (r*r>=(ax - (x[i] + wid[i] / 2))*(ax - (x[i] + wid[i] / 2)) + (ay - (y[i] - len[i] / 2))*(ay - (y[i] - len[i] / 2)))){
						score++;
					}
					else if ((ax < x[i] - wid[i] / 2 && ay > y[i] + len[i] / 2) && r*r >= (ax - (x[i] - wid[i] / 2))*(ax - (x[i] - wid[i] / 2)) + (ay - (y[i] + len[i] / 2))*(ay - (y[i] + len[i] / 2))){
						score++;
					}
					else if ((ax < x[i] - wid[i] / 2 && ay < y[i] - len[i] / 2) && r*r>=(ax - (x[i] - wid[i] / 2))*(ax - (x[i] - wid[i] / 2)) + (ay - (y[i] - len[i] / 2))*(ay - (y[i] - len[i] / 2))){
						score++;
					}
				}
			}
		}
		printf("%d\n", score);
	}
	return 0;
}
