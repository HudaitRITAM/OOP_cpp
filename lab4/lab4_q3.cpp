#include<iostream>
using namespace std;
void num(char c='*',int n=80)
{
	while (n>0)
	{
	cout<<c;
	n--;
	}
	cout<<endl;	
}
int main()
{
	num('A',6);
	num('A');
	num();
return 0;
}