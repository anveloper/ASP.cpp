#include <iostream>

int main(void)
{
  int N;
  std::cin >> N;

  if (N == 1)
    std::cout << 5;
  else
    std::cout << ((long)(((2 + N + 1) / (double)2) * N * 3 - 2 * N) + 1) % 45678;
  return 0;
}
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(int argc, char *argv[])
// {
//   int n;
//   int num;
//   int sum;

//   sum = 5;
//   num = 7;

//   cin >> n;

//   for (int i = 2; i <= n; ++i)
//   {
//     sum += num;
//     num += 3;

//     sum %= 45678;
//     num %= 45678;
//   }

//   cout << sum << endl;

//   return 0;
// }