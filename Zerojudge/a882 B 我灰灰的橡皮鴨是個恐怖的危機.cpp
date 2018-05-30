#include<stdio.h>
#include<string.h>
int main()
{
	int time;
	scanf("%d",&time);
	while(time>0){
		char a[5008];
		int len,i,all=0;
		scanf("%s",a);
		len=strlen(a);
		for(i=0;i<len;i++){
			if(a[i]=='X'){
				all+=2;
			}else if(a[i]=='H'){
			all+=1;
			}
		}
		printf("%d\n",all);
		time--;
	}
	return 0;
}
