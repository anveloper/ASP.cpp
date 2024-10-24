#include <iostream>
using namespace std;
#define endl '\n'
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int N;
  cin >> N;

  while (N--)
  {
    int X;
    cin >> X;

    for (int i = 10; i < X; i *= 10)
    {
      if (X % i / (i / 10) >= 5)
      {
        X = (X / i + 1) * i;
      }
      else
      {
        X = X / i * i;
      }
    }
    cout << X << endl;
  }
}
