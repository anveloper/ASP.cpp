#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  string word;
  vector<string> words;
  for (int i = 0; i < n; i++)
  {
    cin >> word;

    string c = "";
    for (int j = 0; j < m; j++)
    {
      c += word[j];
      c += word[j];
    }

    words.push_back(c);
  }

  bool flag = 0;
  string compare;
  for (auto &ele : words)
  {
    cin >> compare;
    if (ele != compare)
    {
      flag = 1;
      break;
    }
  }

  if (flag)
  {
    cout << "Not Eyfa";
  }
  else
  {
    cout << "Eyfa";
  }

  return 0;
}