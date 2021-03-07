#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt", "r",
			stdin);
	// freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
	setIO("");

	int cnt = 0;
	char trash, lookout;
	int pos1, pos2;
	string password;

	for (int i = 0; i < 1000; i++) {
		cin >> pos1 >> trash >> pos2 >> lookout >> trash >> password;
		bool x = password[pos1 - 1] == lookout;
		bool y = password[pos2 - 1] == lookout;
		if (x != y) cnt++;
	}
	cout << cnt;
}
