using namespace std;

int main() 
{
    //программа определет средний рост n учащихся в классе.
    cout << "enter the quantity of students;\n";
    int n, a;
    float sum=0;
    cin >> n;
    cout << "and enter heights of students:\n";
for (int i = 0; i < n; i++)
{
  cin >> a;
  sum += a;
}
float avg = sum/n;
cout << "average height: \n";
cout << avg;
return 0;
}
