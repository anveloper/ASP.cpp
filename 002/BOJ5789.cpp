#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  string s1;
  for (int i = 0; i < n; i++)
  {
    cin >> s1;
    int s = s1.size() / 2;
    cout << "Do-it";
    if (s1[s - 1] != s1[s])
      cout << "-Not";
    cout << '\n';
  }
}