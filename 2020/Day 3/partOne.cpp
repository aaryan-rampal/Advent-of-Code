#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen("F:\\Grade 11\\Comp Sci\\Personal\\C++\\AOC\\Day 3\\input1.txt", "r", stdin);
	// freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
	setIO("");

	int y = 0, cnt = 0;
	string row;
	cin >> row;

	for (int i = 0; i < 322; i++) {
		cin >> row;
		y += 3;
		if (y > 30) y -= 31;
		if (row[y] == '#') cnt++;
	}

	cout << cnt;
}

// 31 per row. 323 per column.