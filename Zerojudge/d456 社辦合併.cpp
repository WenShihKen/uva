#include <cstdio>
#include <cstring>
int main()
{
    char str[10001];
    int t;
    while(scanf("%d", &t) == 1){
        gets(str);
        while(t--){
            char a, b, Ans[10001]={'\0'}, mid[10001]={'\0'};
            gets(str);
            scanf("%c%c", &a, &b);
            int len = strlen(str), top = 0, index = 0, judge = 0;
            for(int i = len-1; i >= 0; i--){
                if((str[i] == a || str[i] == b) && judge == 0){
                    Ans[top++] = str[i--];
                    if(str[i+1] == b){
                        while(str[i] != a)
                            mid[index++] = str[i--];
                    }
                    else{
                        while(str[i] != b)
                            mid[index++] = str[i--];
                    }
                    judge = 1;
                    Ans[top++] = str[i];
                }
                else    Ans[top++] = str[i];
            }
            for(int i = strlen(Ans)-1; i >= 0; i--)
                printf("%c", Ans[i]);
            puts("");
            for(int i = strlen(mid)-1; i >= 0; i--)
                printf("%c", mid[i]);
            puts("");
            gets(str);
        }
    }
    return 0;
}
