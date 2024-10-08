#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i < n + 1; i++)
  {
    for (int j = n - i; j > 0; j--)
    {
      cout << " ";
    }

    if (i == 1)
    {
      cout << "*\n";
    }
    else
    {
      cout << "*";
      for (int j = 0; j < 2 * (i - 1) - 1; j++)
      {
        cout << " ";
      }
      cout << "*\n";
    }
  }

  return 0;
}