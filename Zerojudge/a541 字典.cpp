#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
int main()
{
	int N, Q;
	char s[21];
	while (scanf("%d", &N)!=EOF){
		map<string, int>record;
		while (N--){
			scanf("%s", s);
			record[s]++;
		}
		scanf("%d", &Q);
		while (Q--){
			scanf("%s", s);
			puts(record[s] ? "yes" : "no");
			record[s]++;
		}
	}
	return 0;
}
