#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
int rtN(char a);
int RtN(char rn[20]);
void NtR(int n);
struct rom{int n;  string sy;};
rom rsy[13];
int main()
  {
  rsy[0].n=1000;rsy[0].sy="M";
  rsy[1].n=900;rsy[1].sy="CM";
  rsy[2].n=500;rsy[2].sy="D";
  rsy[3].n=400;rsy[3].sy="CD";
  rsy[4].n=100;rsy[4].sy="C";
  rsy[5].n=90;rsy[5].sy="XC";
  rsy[6].n=50;rsy[6].sy="L";
  rsy[7].n=40;rsy[7].sy="XL";
  rsy[8].n=10;rsy[8].sy="X";
  rsy[9].n=9;rsy[9].sy="IX";
  rsy[10].n=5;rsy[10].sy="V";
  rsy[11].n=4;rsy[11].sy="IV";
  rsy[12].n=1;rsy[12].sy="I";
  
  char n1[20],n2[20];
  while(cin>>n1)
      {
      if(n1[0]!='#') {cin>>n2; NtR(abs(RtN(n1)-RtN(n2)));}
      else return 0;
      }
  }
  
/////////////////////////////////////////////////////////////////
int RtN(char rn[20])                                                //羅馬字串轉成一般文字 
  {                                                                        //MDCDXVIII ->1918
  int n=0;
  for(int k=strlen(rn)-1;k>=0;k--)
    {
    if(rtN(rn[k])<rtN(rn[k+1])) n=n-rtN(rn[k]);
    else n=n+rtN(rn[k]);
    }
  return n;
  }
//////////////////////////////////////////////////////////////////
int rtN(char a)                                                         //羅馬字元轉數字 
  {                                                                         //V -> 5
  switch(int(a))
       {
       case 67:
       return 100;
       case 68:
       return 500;
       case 73:
       return 1;
       case 76:
       return 50;
       case 77:
       return 1000;
       case 86:
       return 5;
       case 88:
       return 10;
       default:
       return 0;
       }
  }
//////////////////////////////////////////////////////////////////////
void NtR(int n)                                                              //數字轉羅馬數字
   {
   if(n==0) {cout<<"ZERO"<<endl;return;}
   for(int k=0;k<13;k++)
      {
      if(n/rsy[k].n!=0){cout<<rsy[k].sy;n-=rsy[k].n;k--;}
      }
   cout<<endl;
   return ;
   }
