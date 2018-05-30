#include<stdio.h>
int main(){
double s1,s2,s3;
while(scanf("%lf%lf%lf",&s1,&s2,&s3)!=EOF){
double temp=0.0;
temp=s1+s2+s3+((s2*s3)/(2*s1))+((s3*s1)/(2*s2))+((s1*s2)/(2*s3));
printf("%.2lf\n",temp);
}
return 0;
}
