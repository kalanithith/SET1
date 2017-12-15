#include <iostream>
using namespace std;
int main()
{
int year,d;
cin>>year;
d=year%4;
if(d==0)
cout<<"\nleap year";
else
cout<<"\nnot a leap year";
	return 0;
}
