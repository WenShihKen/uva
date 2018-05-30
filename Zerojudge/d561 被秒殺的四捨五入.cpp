#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main()
{
  char S[200];
  while(scanf("%s",&S)==1)
      {
         int N=strlen(S),Flag=0,NUM=0,P=0,a;
         for(a=0;a<N;a++)
            if(S[a]=='.')
              {
               P=(S[a+1]-48)*10;
               if(a+3<N)
                 if(S[a+3]>='5')
                    S[a+2]++;
               if(a+2<N)
                  P+=(S[a+2]-48);
                  break;
               }
            else
              {
               if(S[a]=='-') Flag=1;
               else
                NUM=NUM*10+S[a]-48;
              }
         if(P>=100) P%=100,NUM++;
         if(Flag==1&&(NUM!=0||P!=0)) putchar('-');
         printf("%d.%02d\n",NUM,P);
      }
  return 0;
}
