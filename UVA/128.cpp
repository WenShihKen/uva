#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <cstring>
#include <cstdlib> 
#include <cstdio>
#include <stdlib.h> 
using namespace std;
#define mod 34943
#define left 256

int main() {
	string in1;
	while (getline(cin, in1)) {
		if (in1 == "#")
			break;
		int ans = 0;
		for (int i = 0; i < in1.length(); i++) {
			ans = (ans * left + in1[i]) % mod;
		}
		ans = (mod - (ans * left % mod * left) % mod) % mod;
		printf("%02X %02X\n", ans / left, ans % left);
	}
}