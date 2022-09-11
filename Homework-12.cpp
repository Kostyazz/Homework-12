#include <iostream>
#include <string>

using namespace std;

bool isKPeriodic(string s, unsigned k) {
	//Not KPeriodic if k == 0, k > string length, or string length doesn't divisible by k
	if (k <= 0 || k > s.length() || s.length() % k) {
		return false;
	}
	for (size_t i = 0; i < s.length(); i++) {
		//Not KPeriodic if at some point s[i] != s[i % k]
		if (s[i] != s[i % k]) {
			return false;
		}
	}
	return true;
}

int main() {
	cout << isKPeriodic("abcabcabcabc", 3) << endl;
	cout << isKPeriodic("AabbAabbAabbaabbAabb", 4) << endl;
	cout << isKPeriodic("asdfghjkl;", 7) << endl;
}