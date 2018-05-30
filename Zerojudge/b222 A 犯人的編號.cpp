#include<stdio.h>
#include<string.h>
int main()
{
	char in1[10];
	while (gets(in1)){
		int len1;
		len1 = strlen(in1);
		int t, count;
		scanf("%d\n", &t);
		for (count = 0; count < t; count++){
			char in2[10];
			int j, len2, a = 0, b = 0, k;
			gets(in2);
			len2 = strlen(in2);
			for (j = 0; j < len2; j++){
				if (in2[j] == in1[j]){
					a++;
				}
			}
			for (j = 0; j < len2; j++){		/*會算上重複最後要扣*/
				for (k = 0; k < len2; k++){
					if (in1[j] == in2[k]){
						b++;
					}
				}
			}
			printf("%dA%dB\n", a, b - a);
		}
	}
	return 0;
}
