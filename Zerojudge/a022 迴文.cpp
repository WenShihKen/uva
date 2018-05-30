#include<stdio.h>  
    #include<stdlib.h>  
    #include<string.h>  
    int main()  
    {  
        char a[100],b[100];  
        int i,j;  
        while(scanf("%s",a)!=EOF){  
            j=strlen(a);i=0;j-=1;  
            while(j>=0)  
                b[j--]=a[i++];  
                b[i]='\0';  
                if(strcmp(a,b)==0)  
                    printf("yes\n");  
                else  
                    printf("no\n");  
        }  
        return 0;  
    }
