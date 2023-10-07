#include <iostream>
using namespace std;
int countSetBits(int n)
{
  int count = 0;
  int i = 0;

  while (n)
  {
    int bit = n & 1;
    if (bit)
    {
      count++;
    }
    n >>= 1;
  }

  return count;
}
int main()
{
  int n;
  cin >> n;
  cout << countSetBits(n);
  return 0;
}