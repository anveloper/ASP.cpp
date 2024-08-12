#include <bits/stdc++.h>
using namespace std;

#define ullint unsigned long long int

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    ullint n;
    cin >> n;
    ullint tck_max = n;
    while (n > 1)
    {
      n = n & 1 ? n * 3 + 1 : n / 2;
      tck_max = max(tck_max, n);
    }
    cout << tck_max;
    if (T)
    {
      cout << '\n';
    }
  }
  return 0;
}