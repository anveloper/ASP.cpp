#include <iostream>
using namespace std;

int main()
{
  cin.tie(NULL);
  cin.sync_with_stdio(false);
  int t;
  cin >> t;
  cin.ignore();
  for (int c = 1; c <= t; ++c)
  {
    char cnt[26] = {};
    char a[50], b[50];
    cin.getline(a, 100);
    cin.getline(b, 100);
    int ret = 0;

    for (int i = 0; a[i]; ++i)
    {
      ++cnt[a[i] - 'a'];
    }

    for (int i = 0; b[i]; ++i)
    {
      --cnt[b[i] - 'a'];
    }

    for (int i = 0; i < 26; ++i)
    {
      ret += cnt[i] < 0 ? -cnt[i] : cnt[i];
    }
    cout << "Case #" << c << ": " << ret << '\n';
  }
}