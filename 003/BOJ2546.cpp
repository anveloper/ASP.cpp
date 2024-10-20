#include <iostream>
using namespace std;

typedef long long int ll;
ll A[200000], B[200000];
int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(0);

  int testcase;
  cin >> testcase;
  while (testcase--)
  {
    int n, m, answer = 0;
    cin >> n >> m;
    ll s = 0, t = 0;
    for (int i = 0; i < n; i++)
      cin >> A[i], s += A[i];
    for (int i = 0; i < m; i++)
      cin >> B[i], t += B[i];
    for (int i = 0; i < n; i++)
      answer += (s > n * A[i] && t < m * A[i]);
    cout << answer << '\n';
  }
  return 0;
}