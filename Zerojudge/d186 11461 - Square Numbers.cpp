#include<stdio.h>
int main()
{
	long long int start, end;
	while (scanf("%lld%lld", &start, &end) != EOF){
		long long int count, all = 0;
		if (start == 0 && end == 0){
			break;
		}
		for (count = 1; count*count <= end; count++){
			if (count*count < start){
				continue;
			}
			else{
				all++;
			}
		}
		printf("%lld\n", all);
	}
	return 0;
}
