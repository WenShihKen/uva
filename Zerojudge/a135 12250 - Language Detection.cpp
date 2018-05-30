#include<stdio.h>
#include<string.h>
int main(){
	char a[100], time = 1;
	while (gets(a)){
		int check = 0;
		if (a[0] == '#'){
			break;
		}
		else if (check == strcmp(a, "HELLO")){
			printf("Case %d: ENGLISH\n",time);
		}
		else if (check == strcmp(a, "HALLO")){
			printf("Case %d: GERMAN\n", time);
		}
		else if (check == strcmp(a, "HOLA")){
			printf("Case %d: SPANISH\n", time);
		}
		else if (check == strcmp(a, "BONJOUR")){
			printf("Case %d: FRENCH\n", time);
		}
		else if (check == strcmp(a, "CIAO")){
			printf("Case %d: ITALIAN\n", time);
		}
		else if (check == strcmp(a, "ZDRAVSTVUJTE")){
			printf("Case %d: RUSSIAN\n", time);
		}
		else{
			printf("Case %d: UNKNOWN\n",time);
		}
		time++;
	}
	return 0;
}
