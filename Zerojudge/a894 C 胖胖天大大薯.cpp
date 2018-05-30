#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int in1[100005];
map<int, bool> m;
int compare(const void *arg1, const void *arg2) {
	return  (*(int *)arg1 - *(int *)arg2);
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		m.clear();
		int many, i, c = 0;
		scanf("%d", &many);
		for (i = 0; i < many; i++){
			scanf("%d", &in1[i]);
		}
		qsort((void *)in1, many, sizeof(int), compare);
		int ans = 0;
		for (i = 0; i < many; i++){
			if (m[in1[i]] == 0){
				ans++;
				m[in1[i]] = 1;
			}
			else if (m[in1[i] * 2] == 0){
				ans++;
				m[in1[i] * 2] = 1;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
