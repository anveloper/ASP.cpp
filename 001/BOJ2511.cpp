#include <iostream>
using namespace std;

int a[10], b[10], as, bs;
char l = 'D';

int main()
{
  for (int &i : a)
    cin >> i;
  for (int &i : b)
    cin >> i;
  for (int i = 0; i < 10; ++i)
    a[i] == b[i] ? ++as, ++bs : a[i] > b[i] ? (as += 3, l = 'A')
                                            : (bs += 3, l = 'B');
  cout << as << " " << bs << "\n"
       << (as == bs ? l : as > bs ? 'A'
                                  : 'B');
}