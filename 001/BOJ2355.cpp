#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

  long long a, b;
  scanf("%lld %lld", &a, &b);

  if (a > b)
  {
    swap(a, b);
  }
  printf("%lld", (b - a + 1) * (b + a) / 2);

  return 0;
}