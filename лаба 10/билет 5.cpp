//Максимова Дарья Валерьевна; НКАбд-03-24; лаб № 10; билет 5;
//задачав1
#include <iostream>
using namespace std;


int main() 
{
    int n;
    cout << "размер массива : ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "размер массива должен быть положительным" << endl;
        return 0;
    }

    int numbers[n];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

   
    int positive = 0;
    int negative = 0;

    for (int i = 0; i < n; ++i) 
    {
        if (numbers[i] > 0) 
        {
            positive++;
        } 
        else if (numbers[i] < 0) 
        {
            negative++;
        }
    }

    
    cout << "положительные элементы: " << positive << endl;
    cout << "отрицательные элементы: " << negative << endl;

    return 0;
}
