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
  int x, a, b;
  cin >> x >> a >> b;
  if (abs(x-a) < abs(x-b)) cout << "A" << endl;
  else cout << "B" << endl;
}
