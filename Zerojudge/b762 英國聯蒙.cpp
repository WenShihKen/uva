#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

int main()
{
	int in1;
	string temp[3] = { "Get_Kill","Get_Assist","Die" }, command;
	while (cin >> in1) {
		int All_kill = 0, Assist = 0, Die = 0;
		int temp_kill = 0;
		for (int i = 0; i < in1; i++) {
			cin >> command;
			if (command == temp[0]) {//kill people
				All_kill++, temp_kill++;
				if (temp_kill < 3) {
					printf("You have slain an enemie.\n");
				}
				else if (temp_kill == 3) {
					printf("KILLING SPREE!\n");
				}
				else if (temp_kill == 4) {
					printf("RAMPAGE~\n");
				}
				else if (temp_kill == 5) {
					printf("UNSTOPPABLE!\n");
				}
				else if (temp_kill == 6) {
					printf("DOMINATING!\n");
				}
				else if (temp_kill == 7) {
					printf("GUALIKE!\n");
				}
				else if (temp_kill >= 8) {
					printf("LEGENDARY!\n");
				}
			}
			else if (command == temp[1]) {
				Assist++;
			}
			else if (command == temp[2]) {
				if (temp_kill < 3) {
					printf("You have been slained.\n");
				}
				else {
					printf("SHUTDOWN.\n");
				}
				Die++, temp_kill = 0;
			}
		}
		printf("%d/%d/%d\n", All_kill, Die, Assist);
	}
}
