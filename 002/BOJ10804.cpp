#include <iostream>
using namespace std;
int arr[21];
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 1; i < 21; i++)
  {
    arr[i] = i;
  }

  for (int i = 0; i < 10; i++)
  {
    int s, e, a, b;
    cin >> s >> e;
    a = s;
    b = e;
    for (int j = 0; j < (e - s + 1) / 2; j++)
    {
      swap(arr[a++], arr[b--]);
    }
  }

  for (int i = 1; i < 21; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}