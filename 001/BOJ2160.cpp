#include <stdio.h>

char arr[23][23][230];
int main()
{
  int n, ans, min = 36, mini = 0, minj = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= 5; k++)
    {
      for (int j = 1; j <= 7; j++)
      {
        scanf(" %c", &arr[k][j][i]);
      }
    }
  }
  for (int i = 1; i <= n - 1; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      ans = 0;
      for (int a = 1; a <= 5; a++)
      {
        for (int b = 1; b <= 7; b++)
        {
          if (arr[a][b][i] != arr[a][b][j])
          {
            ans++;
          }
        }
      }
      if (ans < min)
      {
        min = ans;
        mini = i;
        minj = j;
      }
    }
  }
  printf("%d %d", mini, minj);
}