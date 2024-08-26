#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int a = 0, b = 0;
    while (n--)
    {
      char A, B;
      cin >> A >> B;
      if (A == B)
        ;
      else if (A == 'R')
      {
        if (B == 'P')
          b++;
        else if (B == 'S')
          a++;
      }
      else if (A == 'P')
      {
        if (B == 'R')
          a++;
        else if (B == 'S')
          b++;
      }
      else if (A == 'S')
      {
        if (B == 'P')
          a++;
        else if (B == 'R')
          b++;
      }
    }
    if (a == b)
      cout << "TIE\n";
    else if (a > b)
      cout << "Player 1\n";
    else
      cout << "Player 2\n";
  }

  return 0;
}
