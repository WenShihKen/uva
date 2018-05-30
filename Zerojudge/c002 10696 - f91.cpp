#include<stdio.h>
int f91(int in){
	if (in <= 100){
		return f91(f91(in + 11));
	}
	else{
		return in - 10;
	}
}
int main()
{
	int in;
	while (scanf("%d", &in) != EOF){
		if (in == 0){
			break;
		}
		printf("f91(%d) = %d\n",in, f91(in));
	}
	return 0;
}
