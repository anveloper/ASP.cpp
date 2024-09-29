#include <iostream>
using namespace std;

int main()
{
  int k, w, m;
  cin >> k >> w >> m;
  k = w - k;
  if (k <= 0)
    cout << 0;
  else
  {
    w = k / m;
    if (k % m)
      ++w;
    cout << w;
  }

  return 0;
}