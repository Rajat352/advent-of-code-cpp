#include <bits/stdc++.h>
using namespace std;

int main() {

  string c;
  long long ans = 0;

  ifstream myfile;
  myfile.open("input_day1.txt");

  if (myfile.is_open()) {
    myfile >> c;
  }

  for (long long i = 0; i < c.length(); i++) {
    if (c[i] == '(') {
      ans++;
    } else {
      ans--;
    }

    if (ans < 0) {
      cout << i + 1;
      break;
    }
  }

  // cout << ans;

  return 0;
}
