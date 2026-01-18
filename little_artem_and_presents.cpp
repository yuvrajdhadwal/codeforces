#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;

  int out = (t / 3) * 2;

  if (t % 3 != 0) {
    cout << ++out;
  } else {
    cout << out;
  }

  return 0;
}