#include <iostream>
using namespace std;

int main()
{
int x;// x - day of week
cout<< "write day of week"<< endl;
cin>>x;

if(x==1) //monday
cout <<"zero lessons"<<endl;

if(x==2) //tuesday
cout << "4 lessons" << endl;

if(x==3) //wednesday
cout << "3 lessons" << endl;

if(x==4) //thursday
cout << "5 lessons" << endl;

if(x==5) //friday
cout << "2 lessons" << endl;

if(x==6) //saturday
cout << "weekend" << endl;

if(x==7) //sunday
cout << "weekend" << endl;

if(x>=8 || x <=1 ) //not exists
cout << "incorrect data" << endl;
}
