#include<iostream>
using namespace std;
int main()
{
int num;
int count=0;
cin>>num;
while(num>0)
{
num=num/10;
count++;
}
cout<<"\nnumber of digits:"<<count;
return 0;
}
