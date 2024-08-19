#include <bits/stdc++.h>
using namespace std;
int T, ch[100], ans;
string s;
void solve()
{
  ans = 0;
  memset(ch, 0, sizeof(ch));
  for (int i : s)
    ch[i] = 1;
  for (int i = 65; i <= 90; i++)
    if (!ch[i])
      ans += i;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> T;
  while (T--)
  {
    cin >> s;
    solve();
    cout << ans << "\n";
  }
  return 0;
}