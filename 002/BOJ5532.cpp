#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int l, a, b, c, d, ans;

  cin >> l >> a >> b >> c >> d;
  if (a % c == 0)
    ans = a / c;
  else
    ans = a / c + 1;

  if (b % d == 0)
    ans = max(ans, b / d);
  else
    ans = max(ans, b / d + 1);

  cout << l - ans << endl;
  return 0;
}