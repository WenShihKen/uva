#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
typedef unsigned long long int LL;

int main()
{
	LL in1;
	while (cin >> in1) {
		if (in1 % 4 == 0) 
			cout << "egg" << endl;
		else 
			cout << "fat" << endl;	
	}
}
