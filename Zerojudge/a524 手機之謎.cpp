#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
int n;
int num[9];
int i,j;
while(cin >> n){
for (i = 0 ,j = n ; i < n ; i++, j--){
num[i] = j;
}
do{
for (i = 0 ; i < n ; i++){
cout << num[i];
}
cout << endl;
}while(prev_permutation(num,num+n));
}
return 0;
}
