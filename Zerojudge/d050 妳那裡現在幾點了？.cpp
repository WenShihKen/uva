#include<stdio.h>
int main()
{
	int Taiwantime;
	while (scanf("%d", &Taiwantime) != EOF){
		printf("%d\n", (24+(Taiwantime - 15)) % 24);
		Taiwantime = 0;
	}
	return 0;
}
