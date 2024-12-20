//Maxsimova Dasha NKA-03-24
//15.11.2024
//lab №4, ticket 20

#include <iostream>
#include <cmath>
using namespace std;

//number of natural numbers not exceeding n and not divisible by 2,3,5

int main()
{
    cout<<"Enter the natural number\n";
    int n, cnt =0;
    cin>>n;
    
     for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 and i % 3 != 0 and i % 5 != 0)
          cnt ++;
    }      
    cout<<"number of natural numbers not exceeding n and not divisible by 2,3,5:\n";
    cout<<cnt;
}
