#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int count = 0;
    
    while(gets(str))
    {
        int top = 0;//temp用計數器 
        int realp = 0, imap = 0;//實部 虛部 
        int len = strlen(str);
        char temp[15];
        
        for(int i=0; i<len; i++)
        {
            switch(str[i])
            {
                case '+' :
                case '-' ://temp已有物就轉換數字 必定實部 
                    if(top>0)//temp已有物就轉換數字 必定實部 
                    {
                        temp[top] = '\0';
                        realp = atoi(temp);//存入實部
                        top = 0;//歸零 
                    } 
                    break;
                case 'i' ://累計中的數字進虛部 若top不動則虛部塞1 
                    if(top == 0)
                        temp[top++] = '1';
                    temp[top] = '\0';
                    imap = atoi(temp);
                    top = 0;
                    break;
                default : //數字 進暫存器
                    temp[top++] = str[i];
                    break;
            }
        }
        if(top>0)       //結束時 若top沒歸零則轉為實部
        {
            temp[top] = '\0';
            realp = atoi(temp);//存入實部 
            top = 0;//歸零 
        }
        //printf("%d %di\n",realp ,imap);
        
        printf("%.3lf\n",sqrt((double)realp*realp + (double)imap*imap));
    }
}
