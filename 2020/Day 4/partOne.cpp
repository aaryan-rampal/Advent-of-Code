#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen((s + ".out").c_str(), "w", stdout);
}

long long count(string s) {
	regex const expression(":");
	std::ptrdiff_t match_count(std::distance(
		std::sregex_iterator(s.begin(), s.end(), expression),
		std::sregex_iterator()));
	if (s.find("cid") != string::npos) match_count--;

	return match_count == 7 ? 1 : 0;
}

int main() {
	setIO("");
	ifstream myfile;
	myfile.open("F:\\Grade 11\\Comp Sci\\Personal\\C++\\AOC\\Day4\\input.txt");

	vector<string> vec;
	vec.push_back("");
	string s;
	int i = 0;
	long long cnt = 0;

	while (getline(myfile, s)) {
		if (s != "") {
			vec[i].append(" ");
			vec[i].append(s);
		} else {
			cnt += count(vec[i]);
			vec.push_back("");
			i++;
		}
	}

	cout << cnt;
}
