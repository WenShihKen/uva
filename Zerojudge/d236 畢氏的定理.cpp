#include<stdio.h>
int main()
{
	int a, b, c;
	for (a = 1; a <= 1000; a++){
		for (b = 2; b <= 1000; b++){
			if (a == b){
				continue;
			}
			for (c = 3; c <= 1000; c++){
				if (a == c || b == c){
					continue;
				}
				if (a*a + b*b == c*c&&a + b + c == 1000){
					break;
				}
			}
			if (a*a + b*b == c*c&&a + b + c == 1000){
				break;
			}
		}
		if (a*a + b*b == c*c&&a + b + c == 1000){
			break;
		}
	}
	printf("%d\n",a*b*c);
	return 0;
}
