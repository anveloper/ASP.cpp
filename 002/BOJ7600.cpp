#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
  string sentence;

  while (1)
  {
    getline(cin, sentence);
    if (sentence == "#")
    {
      break;
    }
    int alpha[26]{0};
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    int len = sentence.length();
    for (int i = 0; i < len; i++)
    {
      int number = sentence[i] - 'a';

      if (number >= 0 && number <= 26)
      {
        alpha[sentence[i] - 'a']++;
      }
    }

    int answer = 0;
    for (auto &ele : alpha)
    {
      if (ele > 0)
      {
        answer++;
      }
    }

    cout << answer << "\n";
  }

  return 0;
}