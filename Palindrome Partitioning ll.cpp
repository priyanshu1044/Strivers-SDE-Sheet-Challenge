#include <bits/stdc++.h>
int t[104];

bool isPalindrome(string s) {
  string t = s;
  reverse(t.begin(), t.end());
  return s == t;
}

int palindromePartitioning(string str) {
  int n = str.size();
  memset(t, 0, sizeof(t));

  for (int i = n - 1; i >= 0; i--) {
    int mini = INT_MAX;
    for (int k = i; k < n; k++)
      if (isPalindrome(str.substr(i, k - i + 1)))
        mini = min(mini, 1 + t[k + 1]);

    t[i] = mini;
  }

  return t[0] - 1;
}
