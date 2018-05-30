#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int N;
    char team[30], judge[30];
    
    scanf("%d ",&N);
    
    for(int r=0; r<N; r++)
    {
        bool same = true;
        int index = 0;
        
        gets(team);
        gets(judge);
        
        while(team[index]!='\0'||judge[index]!='\0')//長度不一樣必會經過break 
        {
            if(team[index]!=judge[index])
            {
                same = false;
                break;
            }
            index++;
        }
        
        if(same)
            printf("Case %d: Yes\n",r+1);
        else//嘗試OFE 
        {
            same = true;
            int top1 = 0, top2 = 0;
            
            while(team[top1]!='\0'||judge[top2]!='\0')
            {
                while(team[top1]==' ')//空白跳過不看 
                    top1++;
                while(judge[top2]==' ')
                    top2++;
                if(team[top1]!=judge[top2])
                {
                    same = false;
                    break;
                }
                
                top1++;
                top2++;
            }
            
            if(same)
                printf("Case %d: Output Format Error\n",r+1);
            else
                 printf("Case %d: Wrong Answer\n",r+1);               
            
        }
        
        
    }
    
    
}
