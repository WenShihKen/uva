#include<stdio.h>
int main()
{
	int in;
	char a[1000];
	while (scanf("%s", a) !=EOF){
		if (a[0] == '-'){
			break;
		}
		else if (a[1] == 'x'){
			sscanf(a,"%x", &in);
			printf("%d\n", in);
		}
		else{
			sscanf(a,"%d", &in);
			printf("0x%X\n", in);
		}
	}
	return 0;
}
