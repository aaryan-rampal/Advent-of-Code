#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen("F:\\Grade 11\\Comp Sci\\Personal\\C++\\AOC\\Day 3\\input1.txt",
			"r", stdin);
	// freopen((s + ".out").c_str(), "w", stdout);
}

long long findTrees(int loopIncrement, int southIncrement, vector<string> vec) {
	long long col = 0, cnt = 0, x = 322, start = 0;
	if (loopIncrement == 2) {
		x++;
		start++;
	}

	for (int i = start; i < x; i += loopIncrement) {
		col += southIncrement;
		if (col > 30) col -= 31;
		if (vec[i][col] == '#') cnt++;
	}

	return cnt;
}

vector<string> getInput() {
	vector<string> vec(322);
	cin >> vec[0];
	for (size_t i = 0; i < 322; i++) {
		cin >> vec[i];
	}
	return vec;
}

int main() {
	setIO("");

	vector<string> vec = getInput();
	cout << findTrees(1, 1, vec) * findTrees(1, 3, vec) * findTrees(1, 5, vec) *
				findTrees(1, 7, vec) * findTrees(2, 1, vec);
}

// 31 per row. 323 per column.