#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>
#include <cmath>
#include <map>
using ll = long long;
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a+b == c || b+c == a || c+a == b) cout << "Yes" << endl;
  else cout << "No" << endl;
}
