#include <iostream>
using namespace std;

#define MASK (0xF5)

void printBinary(unsigned int n)
{
  int i = 7;
  while(i >= 0) {
    cout << (n >> i & 1);
    i--;
  }
  cout << endl;
}

int main()
{
  unsigned int a = 15;

  cout << "MASK    : ";
  printBinary(MASK);

  cout << "a       : ";
  printBinary(a);

  a &= MASK;
  cout << "a & MASK: ";
  printBinary(a);

  return 0;
}
