//Максимова Дарья Валерьевна; НКАбд-03-24; лаб № 7; билет 7;
#include <iostream>
using namespace std;

int main()
{

int n, k;//n - элменты массива; k - сдвиг 
    cin >> n >> k;
int X[n];
for (int i = 0; i <n; i++)
    cin >> X[i];

int A[n];//вспомогатеольный
for (int i = 0; i <n; i++)
    cin >> A[i];

for (int i = 0; i < k; i++)
  X[i] = A[n-1-i];

for (int i = 0; i < n; i++)
  cout << X[i] << ";";

}
