#include<iostream>
using namespace std;
int main()
{
char c,upvow,lowvow;
cin>>c;
upvow=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
lowvow=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
if(upvow||lowvow)
cout<<"\nvowel";
else
cout<<"\nconsonant";
return 0;
}
