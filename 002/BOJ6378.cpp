#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[])
{
  string s;
  int sum = 0;
  while (1)
  {
    cin >> s;
    if (s == "0")
      break;

    sum = 0;
    while (1)
    {
      for (int i = 0; i < s.length(); i++)
        sum += s[i] - '0';

      if (sum < 10)
        break;
      else
      {
        s = to_string(sum);
        sum = 0;
      }
    }
    cout << sum << '\n';
  }
  return 0;
}