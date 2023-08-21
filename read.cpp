#include <iostream>
#include "Header.h"
using namespace std;
void read(vector<int>& vec) {
	int n;
	cin >> n;
	for (int q = 0; q < n; q++) {
		int c;
		cin >> c;
		vec.push_back(c);
	}
}