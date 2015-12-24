#include<iostream>
int main(){
	int f[80], find;
	f[1] = 1, f[2] = 2, f[3] = 2;
	for (int i = 4; i <= 76; i++)
		f[i] = f[i - 2] + f[i - 3];
	while (std::cin >> find) 
		std::cout << f[find] << std::endl;
}