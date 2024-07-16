#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  while (1)
  {
    int n, a, b, cnt = 1;

    cin >> n;

    if (n == 0)
      break;

    while (n--)
      cin >> a >> b, cnt *= a, cnt -= b;

    cout << cnt << '\n';
  }

  return 0;
}