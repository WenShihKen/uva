#include<stdio.h>
int main()
{
	long long int len, wid, a;
	while (scanf("%lld%lld%lld", &len, &wid, &a) != EOF){
		long long int all = 0;
		if (len%a == 0 && wid%a == 0){
			all = (len / a)*(wid / a);
		}
		else if (len%a == 0 && wid%a != 0){
			all = (len / a)*(wid / a) + len / a;
		}
		else if (len%a != 0 && wid%a == 0){
			all = (len / a)*(wid / a) + wid / a;
		}
		else{
			all = (len / a)*(wid / a) + len / a + wid / a + 1;
		}
		printf("%lld\n", all);
	}
	return 0;
}
