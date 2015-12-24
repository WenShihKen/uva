#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
	int in1, s = 1;
	scanf("%d", &in1);
	getchar();
	while (in1--) {
		string button[] = { "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"," " }, line;
		int press = 0;
		getline(cin, line);
		for (int len = 0; len < line.length(); len++) {
			for (int i = 0; i < 9; i++) {
				if (button[i].find(line[len]) < 10) {
					press += (button[i].find(line[len]) + 1);
				}
			}
		}
		printf("Case #%d: %d\n", s++, press);
	}
}