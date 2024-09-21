#include <cstdio>

int factorial(int n)
{
  int ret = 1;
  for (int i = 1; i <= n; ++i)
  {
    ret *= i;
  }
  return ret;
}

double memo[10] = {1, 2, 2.5};
int main(void)
{
  printf("n e\n");
  printf("- -----------\n");
  printf("0 1\n");
  printf("1 2\n");
  printf("2 2.5\n");
  for (int i = 3; i < 10; ++i)
  {
    int f = factorial(i);
    memo[i] = memo[i - 1] + (double)1 / f;
    printf("%d %.9lf\n", i, memo[i]);
  }
  return 0;
}