// Максимова Дарья Валерьевна; НКАбд-03-24; лаб №5; билет 11;
//Программа, которая выводит 10 чисел, меняя те числа, что больше 15, на 15.
#include<iostream>
using namespace std;

int main()
{
    cout<<"enter your 10 numbers:\n";
    int A[10];
    
    for (int i = 0; i<10; i++)
    {
        cin>>A[i];
        if (A[i]>15)
        A[i]=15;
    }
        
        for (int i = 0; i<10; i++)
        {
            cout<<(A[i])<<" ";
        }
    
    return 0;
}
