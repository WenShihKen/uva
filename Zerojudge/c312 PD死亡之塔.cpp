#include<iostream>
#include<string>

using namespace std;

int rec(int n, int k){
	int safe = 1;
	for (int i = 1; i <= n; i++) {
		safe = (safe + k - 1) % i + 1;
	}
	return safe;
}

int main(){
	int n, k;
	while (scanf_s("%d%d", &n, &k) != EOF) {
		printf("%d\n", rec(n, k));
	}
}