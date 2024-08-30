#include <stdio.h>

int main()
{
  int n, r, e, c, i;
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    scanf("%d %d %d", &r, &e, &c);
    if (r - e + c < 0)
    {
      printf("advertise\n");
    }
    else if (r - e + c == 0)
    {
      printf("does not matter\n");
    }
    else
      printf("do not advertise\n");
  }
}
