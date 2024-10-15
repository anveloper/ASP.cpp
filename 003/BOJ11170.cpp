#include <iostream>
#include <iomanip>

using namespace std;

int solve(int v)
{
  if (v < 0)
    return 0;
  if (v == 0)
    return 1;
  int ans = 1;
  int pv = 1;
  for (int pos = 0;; pos++)
  {
    if (v / pv / 10 == 0)
      break;
    ans += (v / pv / 10 - 1) * pv;
    if (v / pv % 10 == 0)
      ans += (v % pv) + 1;
    else
      ans += pv;
    pv *= 10;
  }
  return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int T;
  cin >> T;
  while (T-- > 0)
  {
    int n, m;
    cin >> n >> m;
    cout << solve(m) - solve(n - 1) << "\n";
  }
  return 0;
}
