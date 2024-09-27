#include <bits/stdc++.h>
using namespace std;

void lpad0(string &a, string &b, int &len)
{
  len = max(a.size(), b.size());
  while (a.size() < len)
    a = '0' + a;
  while (b.size() < len)
    b = '0' + b;
}
string ltrim(vector<int> s)
{
  string t;
  bool start = false;
  for (auto x : s)
  {
    if (!start && x == 0)
      continue;
    t.push_back(x + '0');
    if (!start)
      start = true;
  }
  if (!start)
    return "0";
  else
    return t;
}

string add(string a, string b)
{
  int len;
  lpad0(a, b, len);

  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  vector<int> s;
  int carry = 0;
  for (int i = 0; i < len; i++)
  {
    int k = a[i] + b[i] - '0' * 2 + carry;
    carry = k / 10;
    s.push_back(k % 10);
  }
  if (carry)
    s.push_back(carry);
  reverse(s.begin(), s.end());

  return ltrim(s);
}
string sub(string a, string b)
{
  int len;
  lpad0(a, b, len);

  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  vector<int> s;
  int carry = 0;
  for (int i = 0; i < len; i++)
  {
    int k = a[i] - b[i] + carry;
    if (k < 0)
    {
      k = k + 10;
      carry = -1;
    }
    else
    {
      carry = 0;
    }
    s.push_back(k);
  }
  reverse(s.begin(), s.end());

  return ltrim(s);
}
string divby2(string a)
{
  int len = a.size();

  vector<int> s;
  int carry = 0;
  for (int i = 0; i < len; i++)
  {
    int k = a[i] - '0' + carry * 10;
    carry = k % 2;
    s.push_back(k / 2);
  }

  return ltrim(s);
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string a, b;
  cin >> a >> b;
  cout << divby2(add(a, b)) << '\n'
       << divby2(sub(a, b)) << '\n';

  return 0;
}