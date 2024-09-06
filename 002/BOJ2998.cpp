#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stack>

using namespace std;

int main(void)
{
  string str;
  cin >> str;

  vector<int> num(3);
  stack<int> stk;

  int res = 0;
  int power = 1;
  int tmp = 0;

  while (str.size() > 2)
  {
    tmp = 0;
    num.assign(3, 0);
    num[0] = str[str.size() - 3] - '0';
    num[1] = str[str.size() - 2] - '0';
    num[2] = str[str.size() - 1] - '0';

    tmp += num[0] * (int)pow(2, 2);
    tmp += num[1] * (int)pow(2, 1);
    tmp += num[2] * (int)pow(2, 0);

    stk.push(tmp);

    str.erase(str.size() - 3, 3);
  }
  tmp = 0;
  if (str.size() == 1)
  {
    str[0] -= '0';
    if (str[0])
      stk.push(1);
  }
  else if (str.size() == 2)
  {
    str[0] -= '0';
    str[1] -= '0';

    tmp += str[0] * (int)pow(2, 1);
    tmp += str[1] * (int)pow(2, 0);

    stk.push(tmp);
  }

  while (!stk.empty())
  {
    cout << stk.top();
    stk.pop();
  }
}