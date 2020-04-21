#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solution() {
  int R;
  string S;
  string P = "";

  cin >> R >> S;

  for (char c : S) {
    for (int i = 0; i < R; i++) {
      P += c;
    }
  }

  cout << P << "\n";
}

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int T;
  cin >> T;

  for (int t = 0; t < T; t++) {
    solution();
  }

  return 0;
}