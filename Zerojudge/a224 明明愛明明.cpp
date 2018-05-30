#include <cstdlib>
#include <iostream>
#include<stdio.h>
using namespace std;
int main(int argc, char *argv[])
{
    char s[1001];
    while(gets(s))
    {
        int num[26]={};
        for(int i=0;s[i]!=0;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
               num[s[i]-'A']=num[s[i]-'A']+1;
            else if(s[i]>='a' && s[i]<='z')
               num[s[i]-'a']=num[s[i]-'a']+1;
        }
        int check=0;
        for(int i=0;i<26;i++)
            check += num[i]%2;      

        if(check >1)
            cout<<"no..."<<endl;
        else
            cout<<"yes !"<<endl;
    }
    return EXIT_SUCCESS;
}
