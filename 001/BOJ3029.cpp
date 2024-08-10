#include <iostream>
using namespace std;

int ttoi(char t[])
{
  return ((t[0] & 15) * 10 + (t[1] & 15)) * 60 * 60 + ((t[3] & 15) * 10 + (t[4] & 15)) * 60 + ((t[6] & 15) * 10 + (t[7] & 15));
}

int main()
{
  char ct[9], na[9];
  cin >> ct >> na;
  int c = ttoi(ct), e = ttoi(na), t = e - c;
  if (t < 0)
    t += 24 * 60 * 60;
  if (t == 0)
    cout << "24:00:00";
  else
    printf("%02d:%02d:%02d", t / 60 / 60, t / 60 % 60, t % 60);
  return 0;
}
