//лаба 9 билет 13 спп задача № 1

#include <iostream>
using namespace std;
int main() 
{
  int n;
  cout << ("введите n:\n");
  cin >> n;

  if (n<0) 
  {
    cout << "нужно положительное число" << endl;
  }
  
  int zero=0;
  for (int i=5; n/i>=1; i*=5) 
  {
    zero+=n/i;
  }

  cout << "в факториале " << zero << " нуль(ей)." << endl;
  return 0;
}
