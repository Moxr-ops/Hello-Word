#include <stdio.h>
#include <string>
using namespace std;

void get_Next(string T, int next[]) {
	int i = 1, j = 0;
	next[0] = 0;
	for (i = 1; i < (int)T.length(); i++) {
		while (j > 0 && T[i] != T[j]) {
			j = next[j - 1];
		}
		if (T[i] == T[j]) {
			j++;
		}
		next[i] = j;
	}
}

int strSTR(string S, string T) {
	if (S.length() == 0 || T.length() == 0) {
		return -1;
	}
	int next[T.length()];
	get_Next(T, next);
	int i = 0, j = 0;
	while (i < (int)S.length() && j < (int)T.length()) {
		if (j == 0 || S[i] == T[j]) {
			i++;
			j++;
		} else {
			j = next[j - 1];
		}
	}
	if (j == (int)T.length()) {
		return i - T.length();
	}
	return 0;
}

int main() {
	string T = "ababcababab";
	string S = "ababasjdkhfsfuhddskjbabcababcababab";
	int next[T.length()];
	get_Next(T, next);
	for (int i = 0; i < (int)T.length(); i++) {
		printf("%d ", next[i]);
	}
	printf("\n");
	printf("%d\n", strSTR(S, T));
	return 0;
}
